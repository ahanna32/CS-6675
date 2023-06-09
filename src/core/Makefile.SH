: Makefile.SH generated from Jmake.tmpl and Jmakefile [jmake 3.5-255]
: $X-Id$

case $CONFIG in
'')
	if test -f config.sh; then TOP=.;
	elif test -f ../config.sh; then TOP=..;
	elif test -f ../../config.sh; then TOP=../..;
	elif test -f ../../../config.sh; then TOP=../../..;
	elif test -f ../../../../config.sh; then TOP=../../../..;
	else
		echo "Can't find config.sh."; exit 1
	fi
	. $TOP/config.sh
	;;
esac
case "$0" in
*/*) cd `expr X$0 : 'X\(.*\)/'` ;;
esac
CURRENT=src/core
DIR=`echo $CURRENT/ | sed -e 's/\.\///g'`
echo "Extracting ${DIR}Makefile (with variable substitutions)"

DATE=`date`

$spitshell >Makefile <<!GROK!THIS!
########################################################################
# Makefile generated from Makefile.SH on $DATE

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = $CURRENT
DIR = $DIR

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = $cc
CTAGS = ctags
JCFLAGS = \$(CFLAGS) $optimize $pthread $ccflags $large
JCPPFLAGS = $cppflags
LN = $ln
MKDEP = $mkdep \$(DPFLAGS) \$(JCPPFLAGS) --
MV = $mv
RANLIB = $ranlib
RM = $rm -f
SED = $sed

########################################################################
# Automatically generated parameters -- do not edit

SUBDIRS = g2
USRINC = $usrinc
OBJECTS =   \$(OBJ)
GLIB_CFLAGS =  $glibcflags
SOCKER_CFLAGS =  $sockercflags
SOURCES =   \$(SRC)
GNUTLS_CFLAGS =  $gnutlscflags

########################################################################
# New suffixes and associated building rules -- edit with care

.c.o:
	\$(RM) \$@
	\$(CC) -c \$(JCFLAGS) \$<

!GROK!THIS!
$spitshell >>Makefile <<'!NO!SUBS!'
########################################################################
# Jmake rules for building libraries, programs, scripts, and data files
# $X-Id$

########################################################################
# Force 'make depend' to be performed first -- do not edit

all:: .FORCE_DEPEND

.FORCE_DEPEND::

########################################################################
# Start of Jmakefile

depend:: sub_depend

sub_depend::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
		(cd $$i ; echo "Depending" "in $(DIR)$$i..."; \
			$(MAKE) $(MFLAGS)  depend) || exit 1; \
	done

SRC = \
	alias.c \
	alive.c \
	ban.c \
	bh_download.c \
	bh_upload.c \
	bogons.c \
	bsched.c \
	clock.c \
	ctl.c \
	dh.c \
	dime.c \
	dmesh.c \
	downloads.c \
	dq.c \
	dump.c \
	extensions.c \
	features.c \
	fileinfo.c \
	gdht.c \
	gen-dmesh_url.c \
	gen-gnr_stats.c \
	gen-http_async.c \
	gen-http_url.c \
	gen-ignore.c \
	gen-msg.c \
	gen-msg_drop.c \
	geo_ip.c \
	ggep.c \
	ggep_type.c \
	ghc.c \
	gmsg.c \
	gnet_stats.c \
	guess.c \
	guid.c \
	hcache.c \
	hostiles.c \
	hosts.c \
	hsep.c \
	http.c \
	huge.c \
	ignore.c \
	inet.c \
	ioheader.c \
	ipp_cache.c \
	ipv6-ready.c \
	local_shell.c \
	matching.c \
	move.c \
	mq.c \
	mq_tcp.c \
	mq_udp.c \
	namesize.c \
	nodes.c \
	ntp.c \
	oob.c \
	oob_proxy.c \
	parq.c \
	pcache.c \
	pdht.c \
	pproxy.c \
	publisher.c \
	qhit.c \
	qrp.c \
	routing.c \
	rx.c \
	rx_chunk.c \
	rx_inflate.c \
	rx_link.c \
	rx_ut.c \
	rxbuf.c \
	search.c \
	settings.c \
	share.c \
	soap.c \
	sockets.c \
	spam.c \
	spam_sha1.c \
	sq.c \
	thex_download.c \
	thex_upload.c \
	tls_common.c \
	token.c \
	topless.c \
	tsync.c \
	tth_cache.c \
	tx.c \
	tx_chunk.c \
	tx_deflate.c \
	tx_dgram.c \
	tx_link.c \
	tx_ut.c \
	udp.c \
	udp_sched.c \
	uhc.c \
	upload_stats.c \
	uploads.c \
	urpc.c \
	verify.c \
	verify_sha1.c \
	verify_tth.c \
	version.c \
	vmsg.c \
	whitelist.c

OBJ = \
	alias.o \
	alive.o \
	ban.o \
	bh_download.o \
	bh_upload.o \
	bogons.o \
	bsched.o \
	clock.o \
	ctl.o \
	dh.o \
	dime.o \
	dmesh.o \
	downloads.o \
	dq.o \
	dump.o \
	extensions.o \
	features.o \
	fileinfo.o \
	gdht.o \
	gen-dmesh_url.o \
	gen-gnr_stats.o \
	gen-http_async.o \
	gen-http_url.o \
	gen-ignore.o \
	gen-msg.o \
	gen-msg_drop.o \
	geo_ip.o \
	ggep.o \
	ggep_type.o \
	ghc.o \
	gmsg.o \
	gnet_stats.o \
	guess.o \
	guid.o \
	hcache.o \
	hostiles.o \
	hosts.o \
	hsep.o \
	http.o \
	huge.o \
	ignore.o \
	inet.o \
	ioheader.o \
	ipp_cache.o \
	ipv6-ready.o \
	local_shell.o \
	matching.o \
	move.o \
	mq.o \
	mq_tcp.o \
	mq_udp.o \
	namesize.o \
	nodes.o \
	ntp.o \
	oob.o \
	oob_proxy.o \
	parq.o \
	pcache.o \
	pdht.o \
	pproxy.o \
	publisher.o \
	qhit.o \
	qrp.o \
	routing.o \
	rx.o \
	rx_chunk.o \
	rx_inflate.o \
	rx_link.o \
	rx_ut.o \
	rxbuf.o \
	search.o \
	settings.o \
	share.o \
	soap.o \
	sockets.o \
	spam.o \
	spam_sha1.o \
	sq.o \
	thex_download.o \
	thex_upload.o \
	tls_common.o \
	token.o \
	topless.o \
	tsync.o \
	tth_cache.o \
	tx.o \
	tx_chunk.o \
	tx_deflate.o \
	tx_dgram.o \
	tx_link.o \
	tx_ut.o \
	udp.o \
	udp_sched.o \
	uhc.o \
	upload_stats.o \
	uploads.o \
	urpc.o \
	verify.o \
	verify_sha1.o \
	verify_tth.o \
	version.o \
	vmsg.o \
	whitelist.o 

IF = ../if
GNET_PROPS = gnet_property.h

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I.. -I$(IF)/gen $(GLIB_CFLAGS) $(GNUTLS_CFLAGS) \
	$(SOCKER_CFLAGS) -DCORE_SOURCES -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

gen-dmesh_url.c:   $(IF)/gen/dmesh_url.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-dmesh_url.c

local_realclean::
	$(RM) -f  gen-dmesh_url.c

gen-gnr_stats.c:   $(IF)/gen/gnr_stats.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-gnr_stats.c

local_realclean::
	$(RM) -f  gen-gnr_stats.c

gen-http_async.c:   $(IF)/gen/http_async.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-http_async.c

local_realclean::
	$(RM) -f  gen-http_async.c

gen-http_url.c:   $(IF)/gen/http_url.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-http_url.c

local_realclean::
	$(RM) -f  gen-http_url.c

gen-ignore.c:   $(IF)/gen/ignore.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-ignore.c

local_realclean::
	$(RM) -f  gen-ignore.c

gen-msg.c:   $(IF)/gen/msg.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-msg.c

local_realclean::
	$(RM) -f  gen-msg.c

gen-msg_drop.c:   $(IF)/gen/msg_drop.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-msg_drop.c

local_realclean::
	$(RM) -f  gen-msg_drop.c

.FORCE:

$(IF)/$(GNET_PROPS): .FORCE
	@echo "Checking "$(GNET_PROPS)" in "$(IF)"..."
	cd $(IF); $(MAKE) $(GNET_PROPS)
	@echo "Continuing in $(CURRENT)..."

libcore.a:  $(IF)/$(GNET_PROPS)

all:: libcore.a

local_realclean::
	$(RM) libcore.a

libcore.a:  $(OBJ)
	$(RM) $@
	$(AR) $@  $(OBJ)
	$(RANLIB) $@

local_depend:: ../../mkdep

../../mkdep:
	@echo "You have to run Configure in $(TOP) first."; exit 1

depend:: local_depend
local_depend::
	($(SED) '/^# DO NOT DELETE/q' Makefile && \
	$(MKDEP) $(SOURCES) | \
	$(SED) -e 's:/usr/lib[^ ]*::g; s:$(USRINC)[^ ]*::g; ' \
		-e '/: / b print' -e '$$ b print' -e 'H; d; n; : print' \
		-e 'x; s/\\$$//; s/\\\n//g; s/  */ /g; s/ :/:/;' -e '/: *$$/d' \
	) > Makefile.new
	cp Makefile Makefile.bak
	cp Makefile.new Makefile
	$(RM) Makefile.new

!NO!SUBS!
case "$d_windows" in
undef)
	$spitshell >>Makefile <<'!NO!SUBS!'
all:: gtkg-shell

gtkg-shell: local_shell.c
	$(CC) -o $@ -DLOCAL_SHELL_STANDALONE $<

local_clean::
	$(RM) gtkg-shell
!NO!SUBS!
	;;
esac
$spitshell >>Makefile <<'!NO!SUBS!'

########################################################################
# Common rules for all Makefiles -- do not edit

all::

clean: sub_clean local_clean
realclean: sub_realclean local_realclean
clobber: sub_clobber local_clobber

local_clean::
	if test -f core; then $(RM) core; fi
	$(RM) *~ *.o

local_realclean:: local_clean

local_clobber:: local_realclean
	$(RM) Makefile config.sh

install:: local_install sub_install
	@exit 0

install-strip:: local_install-strip sub_install-strip
	@exit 0

install.man:: maybe_install.man sub_install.man
deinstall:: sub_deinstall local_deinstall
deinstall.man:: sub_deinstall.man maybe_deinstall.man

install.man-no:
deinstall.man-no:

maybe_install.man: install.man-no
maybe_deinstall.man: deinstall.man-no

Makefile.SH: Jmakefile
	-@if test -f $(TOP)/.package; then \
		if test -f Makefile.SH; then \
			echo "	$(RM) Makefile.SH~; $(MV) Makefile.SH Makefile.SH~"; \
			$(RM) Makefile.SH~; $(MV) Makefile.SH Makefile.SH~; \
		fi; \
		echo "	$(JMAKE) -DTOPDIR=$(TOP) -DCURDIR=$(CURRENT)" ; \
		$(JMAKE) -DTOPDIR=$(TOP) -DCURDIR=$(CURRENT) ; \
	else touch $@; fi

Makefile: Makefile.SH
	/bin/sh Makefile.SH

tags::
	$(CTAGS) -w *.[ch]
	$(CTAGS) -xw *.[ch] > tags

local_clobber::
	$(RM) tags

depend::

########################################################################
# Rules for building in sub-directories -- do not edit

subdirs:
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
		(cd $$i ; echo "$(VERB) in $(DIR)$$i..."; \
			$(MAKE) $(MFLAGS) $(FLAGS) $(TARGET)) || exit 1; \
	done

sub_install::
	@$(MAKE) subdirs TARGET=install VERB="Installing" FLAGS=

sub_install-strip::
	@$(MAKE) subdirs TARGET=install-strip VERB="Installing (strip)" FLAGS=

sub_deinstall::
	@$(MAKE) subdirs TARGET=deinstall VERB="Deinstalling" FLAGS=
	@echo "Back to $(CURRENT) for "deinstall...

sub_install.man::
	@$(MAKE) subdirs TARGET=install.man VERB="Installing man pages" FLAGS=

sub_deinstall.man::
	@$(MAKE) subdirs TARGET=deinstall.man VERB="Deinstalling man pages" FLAGS=
	@echo "Back to $(CURRENT) for "deinstall.man...

sub_clean::
	@$(MAKE) subdirs TARGET=clean VERB="Cleaning" FLAGS=
	@echo "Back to $(CURRENT) for "clean...

sub_realclean::
	@$(MAKE) subdirs TARGET=realclean VERB="Real cleaning" FLAGS=
	@echo "Back to $(CURRENT) for "realclean...

sub_clobber::
	@$(MAKE) subdirs TARGET=clobber VERB="Clobbering" FLAGS=
	@echo "Back to $(CURRENT) for "clobber...

tag::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
		(cd $$i ; echo "Tagging" "in $(DIR)$$i..."; \
			$(MAKE) $(MFLAGS)  tag) || exit 1; \
	done

Makefiles::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS);\
	do \
		echo "Making "Makefiles" in $(DIR)$$i..."; \
		(cd $$i || exit 1; \
		if test ! -f Makefile; then /bin/sh Makefile.SH; fi; \
		$(MAKE) $(MFLAGS) Makefiles) || exit 1;\
	done

Makefiles.SH:: Makefile.SH
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS);\
	do \
		case "$(DIR)$$i/" in \
		*/*/*/*/) newtop=../../../..;; \
		*/*/*/) newtop=../../..;; \
		*/*/) newtop=../..;; \
		*/) newtop=..;; \
		esac; \
		case "$(TOP)" in \
		/*) newtop="$(TOP)" ;; \
		esac; \
		echo "Making Makefiles.SH in $(DIR)$$i..."; \
		(cd $$i || exit 1; \
			if test -f Jmakefile; then \
				$(MAKE) $(MFLAGS) -f ../Makefile \
					Makefile TOP=$$newtop CURRENT=$(DIR)$$i && \
				$(MAKE) $(MFLAGS) Makefiles.SH; \
			fi; \
		) || exit 1; \
	done

all::
	@$(MAKE) subdirs TARGET=all VERB="Making all" FLAGS=

local_install::
local_install-strip::
local_deinstall::
local_install.man::
local_deinstall.man::

########################################################################
# Dependencies generated by make depend
# DO NOT DELETE THIS LINE -- make depend relies on it

# Put nothing here or make depend will gobble it up
.FORCE_DEPEND::
	@echo "You must run 'make depend' in $(TOP) first."; exit 1
!NO!SUBS!
chmod 644 Makefile
$eunicefix Makefile

