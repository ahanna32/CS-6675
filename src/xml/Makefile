########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = src/xml
DIR = src/xml/

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

USRINC = /usr/include
GLIB_CFLAGS =  -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
OBJECTS =   $(OBJ)
SOURCES =   $(SRC)

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

# $X-Id: Jmakefile 11185 2006-06-25 22:00:15Z cbiere $

SRC = \
	gen-vxml.c \
	vxml.c \
	xattr.c \
	xfmt.c \
	xnode.c

OBJ = \
	gen-vxml.o \
	vxml.o \
	xattr.o \
	xfmt.o \
	xnode.o 

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I.. $(GLIB_CFLAGS) -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

IF = ../if

gen-vxml.c:   $(IF)/gen/vxml.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-vxml.c

local_realclean::
	$(RM) -f  gen-vxml.c

all:: libxml.a

local_realclean::
	$(RM) libxml.a

libxml.a:  $(OBJ)
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

########################################################################
# Common rules for all Makefiles -- do not edit

all::

clean: local_clean
realclean: local_realclean
clobber: local_clobber

local_clean::
	if test -f core; then $(RM) core; fi
	$(RM) *~ *.o

local_realclean:: local_clean

local_clobber:: local_realclean
	$(RM) Makefile config.sh

install:: local_install
	@exit 0

install-strip:: local_install-strip
	@exit 0

install.man:: maybe_install.man
deinstall:: local_deinstall
deinstall.man:: maybe_deinstall.man

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
# Empty rules for directories with no sub-directories -- do not edit

local_install::
	@echo "install in $(CURRENT) done."

local_install-strip::
	@echo "install (strip) in $(CURRENT) done."

local_deinstall::
	@echo "deinstall in $(CURRENT) done."

local_install.man::
	@echo "install.man in $(CURRENT) done."

local_deinstall.man::
	@echo "deinstall.man in $(CURRENT) done."

Makefiles::

Makefiles.SH::

########################################################################
# Dependencies generated by make depend
# DO NOT DELETE THIS LINE -- make depend relies on it

gen-vxml.o: gen-vxml.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vxml.h xattr.h xnode.h ../if/gen/vxml.h ../lib/str.h ../lib/override.h ../lib/malloc.h
vxml.o: vxml.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vxml.h xattr.h xnode.h ../if/gen/vxml.h xfmt.h ../lib/ostream.h ../lib/ascii.h ../casts.h ../lib/atoms.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/buf.h ../lib/unsigned.h ../lib/cstr.h ../lib/endian.h ../lib/halloc.h ../lib/hstrfn.h ../lib/misc.h ../lib/nv.h ../lib/parse.h ../lib/plist.h ../lib/pslist.h ../lib/slist.h ../lib/str.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/symtab.h ../lib/nv.h ../lib/tokenizer.h ../lib/utf8.h ../lib/vmm.h ../lib/walloc.h ../lib/eslist.h ../lib/xmalloc.h ../lib/override.h ../lib/malloc.h
xattr.o: xattr.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xattr.h ../lib/atoms.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/halloc.h ../lib/hashing.h ../lib/xmalloc.h ../lib/hashlist.h ../lib/hstrfn.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
xfmt.o: xfmt.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xfmt.h xnode.h xattr.h ../lib/ostream.h vxml.h ../if/gen/vxml.h ../lib/ascii.h ../casts.h ../lib/halloc.h ../lib/hset.h ../lib/hash.h ../lib/mutex.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/hstrfn.h ../lib/htable.h ../lib/log.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/nv.h ../lib/pmsg.h ../lib/endian.h ../lib/host_addr.h ../lib/glib-missing.h ../lib/misc.h ../lib/slist.h ../lib/pslist.h ../lib/stacktrace.h ../lib/symtab.h ../lib/nv.h ../lib/unsigned.h ../lib/utf8.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
xnode.o: xnode.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xnode.h xattr.h ../lib/atoms.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/buf.h ../lib/unsigned.h ../lib/cstr.h ../lib/etree.h ../lib/halloc.h ../lib/hashlist.h ../lib/hstrfn.h ../lib/nv.h ../lib/str.h ../lib/walloc.h ../lib/eslist.h 
