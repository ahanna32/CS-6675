########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ..
CURRENT = src
DIR = src/
INSTALL = /usr/bin/install
INSTALLDIR = mkdir -p

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

ARCHLIB = /usr/local/lib/gtk-gnutella
BINDIR = /usr/local/bin
CC = cc
CTAGS = ctags
_EXE = 
JCFLAGS = $(CFLAGS) -O2 -g -pthread -pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow 
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
JLDFLAGS = $(LDFLAGS) -O2 -g -pthread 
L = 1
LIBS = -lz -lm -ldl
MANSRC = /usr/share/man/man1
MKDEP = /home/ricardo/Downloads/gtk-gnutella-1.2.2/mkdep $(DPFLAGS) $(JCPPFLAGS) --
MV = /usr/bin/mv
NM = /usr/bin/nm
RM = /usr/bin/rm -f
SED = /usr/bin/sed

########################################################################
# Automatically generated parameters -- do not edit

SUBDIRS = bin core shell dht lib ui if sdbm upnp xml
USRINC = /usr/include
SOURCES =   $(SRC)
GTK_LDFLAGS =   -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lharfbuzz -lgobject-2.0 -pthread -lglib-2.0
SOCKER_CFLAGS =  
SOCKER_LDFLAGS =  
GTK_CFLAGS =  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/x86_64-linux-gnu -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/fribidi -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GNUTLS_LDFLAGS =  
OBJECTS =   $(OBJ) $(EXTRA)
GNUTLS_CFLAGS =  
DBUS_CFLAGS =  
DBUS_LDFLAGS =  

########################################################################
# New suffixes and associated building rules -- edit with care

.c.o:
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

# $X-Id$

all::

depend:: sub_depend

sub_depend::
	@case '${MFLAGS}' in *[ik]*) set +e;; esac; \
	for i in $(SUBDIRS) ;\
	do \
		(cd $$i ; echo "Depending" "in $(DIR)$$i..."; \
			$(MAKE) $(MFLAGS)  depend) || exit 1; \
	done

SRC = main.c
OBJ = main.o

EXTRA = \
	if/bridge/ui2c.o \
	if/bridge/c2ui.o \
	if/gnet_property.o \
	if/gui_property.o

CFLAGS = -I.. -I. \
	$(GTK_CFLAGS) \
	$(DBUS_CFLAGS) \
	$(GNUTLS_CFLAGS) \
	$(SOCKER_CFLAGS) \
	-DCURDIR=$(CURRENT)

DPFLAGS = $(CFLAGS)
LDFLAGS = \
	-Lshell -lshell \
	-Lupnp -lupnp \
	-Ldht -ldht \
	-Lcore -lcore \
	-Lcore/g2 -lg2 \
	-Lui/gtk -lgtk-common -lgtkx -lgtk-common \
	-Lxml -lxml \
	-Llib -lshared \
	-Lsdbm -lsdbm -lshared \
	$(GTK_LDFLAGS) $(DBUS_LDFLAGS) $(GNUTLS_LDFLAGS) $(SOCKER_LDFLAGS)

.FORCE:

lib/libshared.a: .FORCE
	@echo "Checking "libshared.a" in "lib"..."
	cd lib; $(MAKE) libshared.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  lib/libshared.a

core/libcore.a: .FORCE
	@echo "Checking "libcore.a" in "core"..."
	cd core; $(MAKE) libcore.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  core/libcore.a

core/g2/libg2.a: .FORCE
	@echo "Checking "libg2.a" in "core/g2"..."
	cd core/g2; $(MAKE) libg2.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  core/g2/libg2.a

shell/libshell.a: .FORCE
	@echo "Checking "libshell.a" in "shell"..."
	cd shell; $(MAKE) libshell.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  shell/libshell.a

dht/libdht.a: .FORCE
	@echo "Checking "libdht.a" in "dht"..."
	cd dht; $(MAKE) libdht.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  dht/libdht.a

sdbm/libsdbm.a: .FORCE
	@echo "Checking "libsdbm.a" in "sdbm"..."
	cd sdbm; $(MAKE) libsdbm.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  sdbm/libsdbm.a

upnp/libupnp.a: .FORCE
	@echo "Checking "libupnp.a" in "upnp"..."
	cd upnp; $(MAKE) libupnp.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  upnp/libupnp.a

xml/libxml.a: .FORCE
	@echo "Checking "libxml.a" in "xml"..."
	cd xml; $(MAKE) libxml.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  xml/libxml.a

ui/gtk/libgtk-common.a: .FORCE
	@echo "Checking "libgtk-common.a" in "ui/gtk"..."
	cd ui/gtk; $(MAKE) libgtk-common.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  ui/gtk/libgtk-common.a

ui/gtk/libgtkx.a: .FORCE
	@echo "Checking "libgtkx.a" in "ui/gtk"..."
	cd ui/gtk; $(MAKE) libgtkx.a
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  ui/gtk/libgtkx.a

if/bridge/ui2c.o: .FORCE
	@echo "Checking "ui2c.o" in "if/bridge"..."
	cd if/bridge; $(MAKE) ui2c.o
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  if/bridge/ui2c.o

if/bridge/c2ui.o: .FORCE
	@echo "Checking "c2ui.o" in "if/bridge"..."
	cd if/bridge; $(MAKE) c2ui.o
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  if/bridge/c2ui.o

if/gnet_property.o: .FORCE
	@echo "Checking "gnet_property.o" in "if"..."
	cd if; $(MAKE) gnet_property.o
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  if/gnet_property.o

if/gui_property.o: .FORCE
	@echo "Checking "gui_property.o" in "if"..."
	cd if; $(MAKE) gui_property.o
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella:  if/gui_property.o

if/gnet_property.h: .FORCE
	@echo "Checking "gnet_property.h" in "if"..."
	cd if; $(MAKE) gnet_property.h
	@echo "Continuing in $(CURRENT)..."

main.o:  if/gnet_property.h

if/gui_property.h: .FORCE
	@echo "Checking "gui_property.h" in "if"..."
	cd if; $(MAKE) gui_property.h
	@echo "Continuing in $(CURRENT)..."

main.o:  if/gui_property.h

lib/htable.h: .FORCE
	@echo "Checking "htable.h" in "lib"..."
	cd lib; $(MAKE) htable.h
	@echo "Continuing in $(CURRENT)..."

main.o:  lib/htable.h

local_depend:: ../mkdep

../mkdep:
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

all:: gtk-gnutella

local_realclean::
	$(RM) gtk-gnutella$(_EXE)

gtk-gnutella:  $(OBJ) $(EXTRA)
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  $(OBJ) $(EXTRA) $(JLDFLAGS) $(LIBS)

local_install:: gtk-gnutella
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(BINDIR) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(BINDIR)); \
	$(INSTALL) -c -m 555  gtk-gnutella$(_EXE) $(INSTALL_PREFIX)$(BINDIR)

local_install-strip:: gtk-gnutella
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(BINDIR) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(BINDIR)); \
	$(INSTALL) -c -s -m 555  gtk-gnutella$(_EXE) $(INSTALL_PREFIX)$(BINDIR)

local_deinstall::
	$(RM) $(INSTALL_PREFIX)$(BINDIR)/gtk-gnutella$(_EXE)

local_install.man:: gtk-gnutella.man
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(MANSRC) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(MANSRC)); \
	$(INSTALL) -c -m 444 gtk-gnutella.man $(INSTALL_PREFIX)$(MANSRC)/gtk-gnutella.$(L)

local_deinstall.man::
	$(RM) $(INSTALL_PREFIX)$(MANSRC)/gtk-gnutella.$(L)

main.o: revision.h

revision.h: .FORCE
	$(TOP)/scripts/git-revision $(TOP) $@

all:: gtk-gnutella.nm

local_realclean::
	$(RM) gtk-gnutella.nm

bin/sha1sum: .FORCE
	@echo "Checking "sha1sum" in "bin"..."
	cd bin; $(MAKE) sha1sum
	@echo "Continuing in $(CURRENT)..."

gtk-gnutella.nm:  bin/sha1sum

gtk-gnutella.nm: gtk-gnutella
	$(TOP)/scripts/nm-list gtk-gnutella$(_EXE) $(NM) > $@

local_install local_install-strip:: gtk-gnutella.nm
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(ARCHLIB) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(ARCHLIB)); \
	$(INSTALL) -c -m 444 gtk-gnutella.nm $(INSTALL_PREFIX)$(ARCHLIB)

local_deinstall::
	$(RM) $(INSTALL_PREFIX)$(ARCHLIB)/gtk-gnutella.nm

coverity.tgz: .FORCE
	@if cov-build 2>/dev/null | grep Coverity >/dev/null 2>&1; \
	then \
		: ok; \
	else \
		echo "cov-build not found in PATH"; \
		exit 1; \
	fi
	$(MAKE) realclean
	$(MAKE) depend
	cov-build --dir cov-int $(MAKE) gtk-gnutella.nm
	tar czf $@ cov-int

local_realclean::
	$(RM) -rf cov-int
	$(RM) -f coverity.tgz

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

install.man-yes: local_install.man
install.man-no:
deinstall.man-yes: local_deinstall.man
deinstall.man-no:

maybe_install.man: install.man-yes
maybe_deinstall.man: deinstall.man-yes

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
