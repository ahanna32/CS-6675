########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = src/sdbm
DIR = src/sdbm/

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = cc
CTAGS = ctags
_EXE = 
JCFLAGS = $(CFLAGS) -O2 -g -pthread -pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow 
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
JLDFLAGS = $(LDFLAGS) -O2 -g -pthread 
LIBS = -lz -lm -ldl
MKDEP = /home/ricardo/Downloads/gtk-gnutella-1.2.2/mkdep $(DPFLAGS) $(JCPPFLAGS) --
MV = /usr/bin/mv
RANLIB = :
RM = /usr/bin/rm -f
SED = /usr/bin/sed

########################################################################
# Automatically generated parameters -- do not edit

USRINC = /usr/include
OBJECTS =   $(OBJ)  $(DBA_OBJ)  $(DBU_OBJ)  $(DBE_OBJ)  $(DBT_OBJ)
GLIB_CFLAGS =  -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GLIB_LDFLAGS =   -lgobject-2.0 -pthread -lglib-2.0
COMMON_LIBS =  -lz -lm -ldl
SOURCES =   $(SRC)  $(DBA_SRC)  $(DBU_SRC)  $(DBE_SRC)  $(DBT_SRC)

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

SRC = \
	big.c \
	chkpage.c \
	hash.c \
	loose.c \
	lru.c \
	pair.c \
	rebuild.c \
	sdbm.c \
	tmp.c

OBJ = \
	big.o \
	chkpage.o \
	hash.o \
	loose.o \
	lru.o \
	pair.o \
	rebuild.o \
	sdbm.o \
	tmp.o 

SDBM_FLAGS = -DSDBM -DDUFF

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I.. $(GLIB_CFLAGS) $(SDBM_FLAGS) -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

all:: libsdbm.a

local_realclean::
	$(RM) libsdbm.a

libsdbm.a:  $(OBJ)
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

DBA_SRC = \
	dba.c \
	util.c

DBU_SRC = \
	dbu.c \
	util.c

DBE_SRC = \
	dbe.c \
	util.c

DBT_SRC = \
	dbt.c \
	util.c

DBA_OBJ = \
	dba.o \
	util.o 

DBU_OBJ = \
	dbu.o \
	util.o 

DBE_OBJ = \
	dbe.o \
	util.o 

DBT_OBJ = \
	dbt.o \
	util.o 

LDFLAGS =
LIBS = -L. -lsdbm -L../lib -lshared $(GLIB_LDFLAGS) $(COMMON_LIBS)

dbu dbe dbt: libsdbm.a

.FORCE:

../lib/libshared.a: .FORCE
	@echo "Checking "libshared.a" in "../lib"..."
	cd ../lib; $(MAKE) libshared.a
	@echo "Continuing in $(CURRENT)..."

dba dbu dbe dbt:  ../lib/libshared.a

all:: dba

local_realclean::
	$(RM) dba$(_EXE)

dba:  $(DBA_OBJ)
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  $(DBA_OBJ) $(JLDFLAGS) $(LIBS)

all:: dbu

local_realclean::
	$(RM) dbu$(_EXE)

dbu:  $(DBU_OBJ)
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  $(DBU_OBJ) $(JLDFLAGS) $(LIBS)

all:: dbe

local_realclean::
	$(RM) dbe$(_EXE)

dbe:  $(DBE_OBJ)
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  $(DBE_OBJ) $(JLDFLAGS) $(LIBS)

all:: dbt

local_realclean::
	$(RM) dbt$(_EXE)

dbt:  $(DBT_OBJ)
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  $(DBT_OBJ) $(JLDFLAGS) $(LIBS)

#
# Tests
#

sdbm-test: dbt

test: sdbm-test
	time ./sdbm-test

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

big.o: big.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h big.h ../lib/endian.h private.h pair.h ../lib/bit_field.h ../lib/pow2.h ../lib/buf.h ../lib/unsigned.h ../lib/compat_misc.h ../lib/compat_pio.h ../lib/debug.h ../lib/fd.h ../lib/file.h ../lib/glib-missing.h ../lib/halloc.h ../lib/log.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/pow2.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/unsigned.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
chkpage.o: chkpage.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h private.h pair.h ../lib/override.h ../lib/malloc.h
hash.o: hash.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h
loose.o: loose.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h private.h lru.h pair.h ../lib/array_util.h ../lib/hset.h ../lib/hash.h ../lib/mutex.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/log.h ../lib/pow2.h ../lib/qlock.h ../lib/stringify.h ../lib/tm.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/thread.h ../lib/tm.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
lru.o: lru.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h lru.h pair.h private.h ../lib/atomic.h ../lib/compat_pio.h ../lib/debug.h ../lib/elist.h ../lib/fd.h ../lib/hevset.h ../lib/hash.h ../lib/mutex.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/log.h ../lib/qlock.h ../lib/stacktrace.h ../lib/stringify.h ../lib/tm.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vmm.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
pair.o: pair.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../casts.h sdbm.h tune.h big.h ../lib/endian.h lru.h pair.h private.h ../lib/hashing.h ../lib/xmalloc.h ../lib/log.h ../lib/qlock.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/stringify.h ../lib/tm.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/override.h ../lib/malloc.h
rebuild.o: rebuild.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h private.h big.h ../lib/endian.h lru.h tmp.h ../lib/halloc.h ../lib/hstrfn.h ../lib/log.h ../lib/qlock.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/random.h ../lib/str.h ../lib/override.h ../lib/malloc.h
sdbm.o: sdbm.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h pair.h lru.h big.h ../lib/endian.h tmp.h private.h ../lib/atomic.h ../lib/compat_misc.h ../lib/compat_pio.h ../lib/debug.h ../lib/fd.h ../lib/file.h ../lib/halloc.h ../lib/hstrfn.h ../lib/log.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/pow2.h ../lib/qlock.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/stringify.h ../lib/tm.h ../lib/timestamp.h ../lib/misc.h ../lib/thread.h ../lib/vmm.h ../lib/walloc.h ../lib/eslist.h ../lib/xmalloc.h ../lib/override.h ../lib/malloc.h
tmp.o: tmp.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h tune.h private.h tmp.h ../lib/compat_misc.h ../lib/eslist.h ../lib/fd.h ../lib/file.h ../lib/filelock.h ../lib/halloc.h ../lib/hstrfn.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/parse.h ../lib/str.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/walloc.h ../lib/eslist.h ../lib/override.h ../lib/malloc.h
dba.o: dba.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../casts.h ../lib/progname.h ../lib/pow2.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h sdbm.h
util.o: util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../lib/progname.h
dbu.o: dbu.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h ../lib/progname.h ../lib/vmm.h ../lib/halloc.h
util.o: util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../lib/progname.h
dbe.o: dbe.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h ../lib/base16.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/progname.h
util.o: util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../lib/progname.h
dbt.o: dbt.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sdbm.h ../lib/atomic.h ../lib/log.h ../lib/progname.h ../lib/rand31.h ../lib/random.h ../lib/str.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/thread.h ../lib/tm.h ../lib/override.h ../lib/malloc.h
util.o: util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h 
