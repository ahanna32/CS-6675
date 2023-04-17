########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = src/core
DIR = src/core/

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = cc
CTAGS = ctags
JCFLAGS = $(CFLAGS) -O2 -g -pthread -pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow 
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
LN = /usr/bin/ln
MKDEP = /home/ricardo/Downloads/gtk-gnutella-1.2.2/mkdep $(DPFLAGS) $(JCPPFLAGS) --
MV = /usr/bin/mv
RANLIB = :
RM = /usr/bin/rm -f
SED = /usr/bin/sed

########################################################################
# Automatically generated parameters -- do not edit

SUBDIRS = g2
USRINC = /usr/include
OBJECTS =   $(OBJ)
GLIB_CFLAGS =  -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
SOCKER_CFLAGS =  
SOURCES =   $(SRC)
GNUTLS_CFLAGS =  

########################################################################
# New suffixes and associated building rules -- edit with care

.c.o:
	$(RM) $@
	$(CC) -c $(JCFLAGS) $<

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
	token_system.c \
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
	token_system.o \
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

all:: gtkg-shell

gtkg-shell: local_shell.c
	$(CC) -o $@ -DLOCAL_SHELL_STANDALONE $<

local_clean::
	$(RM) gtkg-shell

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

dime.o: dime.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dime.h ../lib/endian.h ../lib/mempcpy.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
gen-dmesh_url.o: gen-dmesh_url.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/dmesh_url.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-gnr_stats.o: gen-gnr_stats.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/gnr_stats.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-http_async.o: gen-http_async.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/http_async.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-http_url.o: gen-http_url.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/http_url.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-ignore.o: gen-ignore.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ignore.h ../if/gen/ignore.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-msg.o: gen-msg.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/msg.h ../lib/str.h ../lib/override.h ../lib/malloc.h
gen-msg_drop.o: gen-msg_drop.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../if/gen/msg_drop.h ../lib/str.h ../lib/override.h ../lib/malloc.h
ipv6-ready.o: ipv6-ready.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ipv6-ready.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/override.h ../lib/malloc.h
local_shell.o: local_shell.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../core/local_shell.h ../lib/cstr.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/fd.h ../lib/log.h ../lib/compat_poll.h ../lib/compat_un.h ../lib/override.h ../lib/malloc.h
namesize.o: namesize.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h namesize.h ../lib/atoms.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/hashing.h ../lib/xmalloc.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
rx_inflate.o: rx_inflate.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hosts.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h rx.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/vector.h ../lib/unsigned.h ../lib/pmsg.h ../lib/slist.h rx_inflate.h rxbuf.h ../lib/base16.h ../lib/str.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/walloc.h ../lib/eslist.h ../lib/zlib_util.h ../lib/override.h ../lib/malloc.h
rx_link.o: rx_link.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sockets.h tls_common.h ../if/core/wrap.h ../if/core/sockets.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../if/core/sockets.h ../lib/inputevt.h ../lib/eslist.h rx.h ../lib/pmsg.h ../lib/slist.h rx_link.h ../if/core/bsched.h rxbuf.h bsched.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../if/core/nodes.h ../if/core/guid.h ../lib/misc.h ../if/core/mq.h ../lib/host_addr.h ../lib/vendors.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
topless.o: topless.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h topless.h
tx_dgram.o: tx_dgram.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tx.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/pmsg.h ../lib/slist.h tx_dgram.h ../lib/host_addr.h ../if/core/bsched.h ../if/core/wrap.h ../if/core/sockets.h ../lib/inputevt.h udp_sched.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
tx_link.o: tx_link.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sockets.h tls_common.h ../if/core/wrap.h ../if/core/sockets.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../if/core/sockets.h ../lib/inputevt.h ../lib/eslist.h tx.h ../lib/pmsg.h ../lib/slist.h tx_link.h ../if/core/bsched.h bsched.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../if/core/nodes.h ../if/core/guid.h ../lib/misc.h ../if/core/mq.h ../lib/host_addr.h ../lib/vendors.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
verify_sha1.o: verify_sha1.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h verify.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/once.h ../lib/sha1.h ../core/verify_sha1.h ../core/verify.h 
