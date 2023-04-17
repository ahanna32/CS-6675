########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = src/lib
DIR = src/lib/

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = cc
CTAGS = ctags
_EXE = 
JCFLAGS = $(CFLAGS) -O2 -g -pthread -pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow 
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
JLDFLAGS = $(LDFLAGS) -O2 -g -pthread 
JYFLAGS = $(YFLAGS) 
LIBS = -lz -lm -ldl
LN = /usr/bin/ln
MKDEP = /home/ricardo/Downloads/gtk-gnutella-1.2.2/mkdep $(DPFLAGS) $(JCPPFLAGS) --
MV = /usr/bin/mv
RANLIB = :
RM = /usr/bin/rm -f
SED = /usr/bin/sed
YACC = bison -y

########################################################################
# Automatically generated parameters -- do not edit

USRINC = /usr/include
SOURCES =  $(LSRC)  filelock-test.c  float-test.c  ftw-test.c  launch-test.c  pattern-test.c  random-test.c  sort-test.c  spopen-test.c  stack-test.c  stat-test.c  thread-test.c
GLIB_LDFLAGS =   -lgobject-2.0 -pthread -lglib-2.0
COMMON_LIBS =  -lz -lm -ldl
OBJECTS =  $(LOBJ)  filelock-test.o  float-test.o  ftw-test.o  launch-test.o  pattern-test.o  random-test.o  sort-test.o  spopen-test.o  stack-test.o  stat-test.o  thread-test.o
DBUS_CFLAGS =  
GLIB_CFLAGS =  -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include

########################################################################
# New suffixes and associated building rules -- edit with care

.c.o:
	$(RM) $@
	$(CC) -c $(JCFLAGS) $<

########################################################################
# Jmake rules for building libraries, programs, scripts, and data files
# $X-Id: Jmake.rules 195 2015-04-27 21:30:17Z rmanfredi $

########################################################################
# Force 'make depend' to be performed first -- do not edit

all:: .FORCE_DEPEND

.FORCE_DEPEND::

########################################################################
# Start of Jmakefile

# $X-Id$

bit_array.h: bit_array.ht bit_generic.ht
	$(TOP)/scripts/generic-cat bit_array.ht bit_generic.ht array >$@

bit_array.c: bit_generic.ct
	$(TOP)/scripts/generic-cat /dev/null bit_generic.ct array >$@

all:: bit_array.h bit_array.c
depend:: bit_array.h bit_array.c
local_realclean::
	$(RM) bit_array.h bit_array.c

bit_field.h: bit_field.ht bit_generic.ht
	$(TOP)/scripts/generic-cat bit_field.ht bit_generic.ht field >$@

bit_field.c: bit_generic.ct
	$(TOP)/scripts/generic-cat /dev/null bit_generic.ct field >$@

all:: bit_field.h bit_field.c
depend:: bit_field.h bit_field.c
local_realclean::
	$(RM) bit_field.h bit_field.c

htable.h: hgeneric.ht
	$(TOP)/scripts/generic-pp /dev/null hgeneric.ht table ckeyval TABLE >$@

htable.c: hgeneric.ct
	$(TOP)/scripts/generic-pp /dev/null hgeneric.ct table ckeyval TABLE >$@

all:: htable.h htable.c
depend:: htable.h htable.c
local_realclean::
	$(RM) htable.h htable.c

hset.h: hgeneric.ht
	$(TOP)/scripts/generic-pp /dev/null hgeneric.ht set cdata SET >$@

hset.c: hgeneric.ct
	$(TOP)/scripts/generic-pp /dev/null hgeneric.ct set cdata SET >$@

all:: hset.h hset.c
depend:: hset.h hset.c
local_realclean::
	$(RM) hset.h hset.c

LSRC = \
	adns.c \
	aging.c \
	aje.c \
	alloca.c \
	aq.c \
	arc4random.c \
	argv.c \
	ascii.c \
	atio.c \
	atoms.c \
	balloc.c \
	barrier.c \
	base16.c \
	base32.c \
	base64.c \
	bfd_util.c \
	bg.c \
	bigint.c \
	bit_array.c \
	bit_field.c \
	bsearch.c \
	bstr.c \
	buf.c \
	chi2.c \
	ckalloc.c \
	cmwc.c \
	cobs.c \
	compat_gettid.c \
	compat_misc.c \
	compat_pause.c \
	compat_pio.c \
	compat_poll.c \
	compat_sendfile.c \
	compat_setjmp.c \
	compat_sleep_ms.c \
	compat_statvfs.c \
	compat_un.c \
	compat_usleep.c \
	concat.c \
	cond.c \
	constants.c \
	cpufreq.c \
	cq.c \
	crash.c \
	crc.c \
	cstr.c \
	dam.c \
	dbmap.c \
	dbmw.c \
	dbstore.c \
	dbus_util.c \
	debug.c \
	dl_util.c \
	dualhash.c \
	elist.c \
	entropy.c \
	erbtree.c \
	eslist.c \
	etree.c \
	eval.c \
	event.c \
	evq.c \
	exit.c \
	exit2str.c \
	fast_assert.c \
	fd.c \
	file.c \
	file_object.c \
	filehead.c \
	filelock.c \
	filename.c \
	float.c \
	fragcheck.c \
	frand.c \
	fs_free_space.c \
	ftw.c \
	gen-iprange.c \
	gentime.c \
	getcpucount.c \
	getdate.c \
	getgateway.c \
	gethomedir.c \
	getline.c \
	getphysmemsize.c \
	glib-missing.c \
	glog.c \
	gnet_host.c \
	halloc.c \
	hash.c \
	hashing.c \
	hashlist.c \
	hashtable.c \
	header.c \
	hevset.c \
	hikset.c \
	host_addr.c \
	hset.c \
	hstrfn.c \
	htable.c \
	html.c \
	http_range.c \
	idtable.c \
	inputevt.c \
	iovec.c \
	iprange.c \
	ipset.c \
	iso3166.c \
	launch.c \
	leak.c \
	list.c \
	listener.c \
	log.c \
	magnet.c \
	malloc.c \
	map.c \
	mem.c \
	mempcpy.c \
	memusage.c \
	mime_type.c \
	mingw32.c \
	misc.c \
	mtwist.c \
	mutex.c \
	nid.c \
	nv.c \
	offtime.c \
	ohash_table.c \
	omalloc.c \
	once.c \
	options.c \
	ostream.c \
	pagetable.c \
	palloc.c \
	parse.c \
	path.c \
	patricia.c \
	pattern.c \
	plist.c \
	pmsg.c \
	pow2.c \
	product.c \
	progname.c \
	prop.c \
	pslist.c \
	qlock.c \
	rand31.c \
	random.c \
	rbtree.c \
	regex.c \
	ripening.c \
	rwlock.c \
	sectoken.c \
	semaphore.c \
	sequence.c \
	setproctitle.c \
	sha1.c \
	shuffle.c \
	signal.c \
	slist.c \
	smsort.c \
	sorted_array.c \
	spinlock.c \
	spopen.c \
	stacktrace.c \
	stats.c \
	str.c \
	stringify.c \
	strpcpy.c \
	strtok.c \
	strvec.c \
	symbols.c \
	symtab.c \
	tea.c \
	teq.c \
	thread.c \
	tiger.c \
	tigertree.c \
	timestamp.c \
	tm.c \
	tmalloc.c \
	tokenizer.c \
	tqsort.c \
	tsig.c \
	url.c \
	urn.c \
	utf8.c \
	vector.c \
	vendors.c \
	vmea.c \
	vmm.c \
	vsort.c \
	waiter.c \
	walloc.c \
	watcher.c \
	wd.c \
	well.c \
	win32dlp.c \
	wordvec.c \
	wq.c \
	xmalloc.c \
	xslist.c \
	xsort.c \
	xsort_data.c \
	xxtea.c \
	zalloc.c \
	zlib_util.c

LOBJ = \
	adns.o \
	aging.o \
	aje.o \
	alloca.o \
	aq.o \
	arc4random.o \
	argv.o \
	ascii.o \
	atio.o \
	atoms.o \
	balloc.o \
	barrier.o \
	base16.o \
	base32.o \
	base64.o \
	bfd_util.o \
	bg.o \
	bigint.o \
	bit_array.o \
	bit_field.o \
	bsearch.o \
	bstr.o \
	buf.o \
	chi2.o \
	ckalloc.o \
	cmwc.o \
	cobs.o \
	compat_gettid.o \
	compat_misc.o \
	compat_pause.o \
	compat_pio.o \
	compat_poll.o \
	compat_sendfile.o \
	compat_setjmp.o \
	compat_sleep_ms.o \
	compat_statvfs.o \
	compat_un.o \
	compat_usleep.o \
	concat.o \
	cond.o \
	constants.o \
	cpufreq.o \
	cq.o \
	crash.o \
	crc.o \
	cstr.o \
	dam.o \
	dbmap.o \
	dbmw.o \
	dbstore.o \
	dbus_util.o \
	debug.o \
	dl_util.o \
	dualhash.o \
	elist.o \
	entropy.o \
	erbtree.o \
	eslist.o \
	etree.o \
	eval.o \
	event.o \
	evq.o \
	exit.o \
	exit2str.o \
	fast_assert.o \
	fd.o \
	file.o \
	file_object.o \
	filehead.o \
	filelock.o \
	filename.o \
	float.o \
	fragcheck.o \
	frand.o \
	fs_free_space.o \
	ftw.o \
	gen-iprange.o \
	gentime.o \
	getcpucount.o \
	getdate.o \
	getgateway.o \
	gethomedir.o \
	getline.o \
	getphysmemsize.o \
	glib-missing.o \
	glog.o \
	gnet_host.o \
	halloc.o \
	hash.o \
	hashing.o \
	hashlist.o \
	hashtable.o \
	header.o \
	hevset.o \
	hikset.o \
	host_addr.o \
	hset.o \
	hstrfn.o \
	htable.o \
	html.o \
	http_range.o \
	idtable.o \
	inputevt.o \
	iovec.o \
	iprange.o \
	ipset.o \
	iso3166.o \
	launch.o \
	leak.o \
	list.o \
	listener.o \
	log.o \
	magnet.o \
	malloc.o \
	map.o \
	mem.o \
	mempcpy.o \
	memusage.o \
	mime_type.o \
	mingw32.o \
	misc.o \
	mtwist.o \
	mutex.o \
	nid.o \
	nv.o \
	offtime.o \
	ohash_table.o \
	omalloc.o \
	once.o \
	options.o \
	ostream.o \
	pagetable.o \
	palloc.o \
	parse.o \
	path.o \
	patricia.o \
	pattern.o \
	plist.o \
	pmsg.o \
	pow2.o \
	product.o \
	progname.o \
	prop.o \
	pslist.o \
	qlock.o \
	rand31.o \
	random.o \
	rbtree.o \
	regex.o \
	ripening.o \
	rwlock.o \
	sectoken.o \
	semaphore.o \
	sequence.o \
	setproctitle.o \
	sha1.o \
	shuffle.o \
	signal.o \
	slist.o \
	smsort.o \
	sorted_array.o \
	spinlock.o \
	spopen.o \
	stacktrace.o \
	stats.o \
	str.o \
	stringify.o \
	strpcpy.o \
	strtok.o \
	strvec.o \
	symbols.o \
	symtab.o \
	tea.o \
	teq.o \
	thread.o \
	tiger.o \
	tigertree.o \
	timestamp.o \
	tm.o \
	tmalloc.o \
	tokenizer.o \
	tqsort.o \
	tsig.o \
	url.o \
	urn.o \
	utf8.o \
	vector.o \
	vendors.o \
	vmea.o \
	vmm.o \
	vsort.o \
	waiter.o \
	walloc.o \
	watcher.o \
	wd.o \
	well.o \
	win32dlp.o \
	wordvec.o \
	wq.o \
	xmalloc.o \
	xslist.o \
	xsort.o \
	xsort_data.o \
	xxtea.o \
	zalloc.o \
	zlib_util.o 

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I.. $(GLIB_CFLAGS) $(DBUS_CFLAGS) -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

all:: libshared.a

local_realclean::
	$(RM) libshared.a

libshared.a: $(LOBJ)
	$(RM) $@
	$(AR) $@ $(LOBJ)
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

getdate.c: getdate.y
	-@if test -f $(TOP)/.package; then \
		echo "	$(YACC) $(JYFLAGS) $<"; \
		$(YACC) $(JYFLAGS) $<; \
		echo "	$(MV) y.tab.c $@"; \
		$(MV) y.tab.c $@; else touch $@; fi

getdate: getdate.c
	$(CC) -o $@ $(JCFLAGS) -DTEST $< libshared.a $(LIBS)

#
# Floating point formatting tests
#
# The "bad-fixed" target show formatting errors: the output file MUST be empty
# or there are bugs in the floating point formatting routine.
#

LDFLAGS =
LIBS = $(GLIB_LDFLAGS) $(COMMON_LIBS)
IF = ../if

floats: floats.bz2
	bzip2 -c -d floats.bz2 >$@

float-dragon.out: float-dragon_out.bz2
	bzip2 -c -d float-dragon_out.bz2 >$@

bad-fixed: float-test floats
	./float-test floats compare >$@

bad-free: float-test floats float-dragon.out
	./float-test floats dragon | diff -u - float-dragon.out >$@

float-times: float-test floats
	uname -a >$@
	echo -n "base:    " >>$@
	sh -c "time ./float-test floats base" >>$@ 2>&1
	echo -n "sprintf: " >>$@
	sh -c "time ./float-test floats sprintf" >>$@ 2>&1
	echo -n "printf:  " >>$@
	sh -c "time ./float-test floats printf > /dev/null" >>$@ 2>&1
	echo -n "fixed:   " >>$@
	sh -c "time ./float-test floats fixed > /dev/null" >>$@ 2>&1
	echo -n "free:    " >>$@
	sh -c "time ./float-test floats dragon > /dev/null" >>$@ 2>&1

ftw-check: ftw-test
	./ftw-mktree
	./ftw-test -s ftw-root | diff -u - ftw-root.out >$@

local_clean::
	$(RM) floats float-dragon.out bad-fixed float-times ftw-check
	./ftw-mktree -r

all:: filelock-test

local_realclean::
	$(RM) filelock-test$(_EXE)

filelock-test:  filelock-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  filelock-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: float-test

local_realclean::
	$(RM) float-test$(_EXE)

float-test:  float-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  float-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: ftw-test

local_realclean::
	$(RM) ftw-test$(_EXE)

ftw-test:  ftw-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  ftw-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: launch-test

local_realclean::
	$(RM) launch-test$(_EXE)

launch-test:  launch-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  launch-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: pattern-test

local_realclean::
	$(RM) pattern-test$(_EXE)

pattern-test:  pattern-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  pattern-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: random-test

local_realclean::
	$(RM) random-test$(_EXE)

random-test:  random-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  random-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: sort-test

local_realclean::
	$(RM) sort-test$(_EXE)

sort-test:  sort-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  sort-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: spopen-test

local_realclean::
	$(RM) spopen-test$(_EXE)

spopen-test:  spopen-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  spopen-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: stack-test

local_realclean::
	$(RM) stack-test$(_EXE)

stack-test:  stack-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  stack-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: stat-test

local_realclean::
	$(RM) stat-test$(_EXE)

stat-test:  stat-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  stat-test.o $(JLDFLAGS)  libshared.a $(LIBS)

all:: thread-test

local_realclean::
	$(RM) thread-test$(_EXE)

thread-test:  thread-test.o  libshared.a
	-$(RM) $@$(_EXE)
	if test -f $@$(_EXE); then \
		$(MV) $@$(_EXE) $@~$(_EXE); fi
	$(CC) -o $@$(_EXE)  thread-test.o $(JLDFLAGS)  libshared.a $(LIBS)

gen-iprange.c:   $(IF)/gen/iprange.c
	$(RM) -f $@
	$(LN) $? $@

local_depend::  gen-iprange.c

local_realclean::
	$(RM) -f  gen-iprange.c

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

adns.o: adns.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h adns.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h aq.h ascii.h ../casts.h atoms.h gnet_host.h hashlist.h vector.h ../lib/unsigned.h cq.h debug.h fd.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h inputevt.h once.h shuffle.h signal.h stringify.h tm.h timestamp.h waiter.h walloc.h eslist.h xmalloc.h override.h malloc.h
aging.o: aging.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h aging.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h cq.h elist.h hashing.h xmalloc.h hikset.h hash.h mutex.h spinlock.h atomic.h walloc.h eslist.h override.h malloc.h
aje.o: aje.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h aje.h entropy.h mempcpy.h omalloc.h once.h pslist.h random.h sha1.h pow2.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h tm.h timestamp.h misc.h fs_free_space.h vmm.h unsigned.h xxtea.h override.h malloc.h
alloca.o: alloca.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h alloca.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h
aq.o: aq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h aq.h atomic.h cond.h eslist.h log.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h waiter.h walloc.h override.h malloc.h
arc4random.o: arc4random.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h arc4random.h entropy.h omalloc.h once.h pslist.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h
argv.o: argv.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h argv.h halloc.h override.h malloc.h
ascii.o: ascii.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h hashing.h xmalloc.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
atio.o: atio.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h atio.h hashing.h xmalloc.h pow2.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h override.h malloc.h
atoms.o: atoms.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h buf.h unsigned.h constants.h hashing.h xmalloc.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h omalloc.h once.h str.h stringify.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
balloc.o: balloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h balloc.h atomic.h override.h malloc.h
barrier.o: barrier.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h barrier.h atomic.h cond.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h walloc.h eslist.h pslist.h override.h malloc.h
base16.o: base16.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h base16.h ascii.h ../casts.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
base32.o: base32.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h base32.h ascii.h ../casts.h
base64.o: base64.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h base64.h override.h malloc.h
bfd_util.o: bfd_util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bfd_util.h concat.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h once.h path.h symbols.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h xmalloc.h override.h malloc.h
bg.o: bg.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bg.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h cq.h elist.h entropy.h eslist.h log.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h once.h str.h stringify.h tm.h timestamp.h walloc.h override.h malloc.h
bigint.o: bigint.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bigint.h buf.h unsigned.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h walloc.h eslist.h xmalloc.h override.h malloc.h
bit_array.o: bit_array.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bit_array.h pow2.h halloc.h override.h malloc.h
bit_field.o: bit_field.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bit_field.h pow2.h halloc.h override.h malloc.h
bsearch.o: bsearch.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bsearch.h unsigned.h pslist.h override.h malloc.h
bstr.o: bstr.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h bstr.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ../casts.h halloc.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h walloc.h eslist.h override.h malloc.h
buf.o: buf.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h buf.h unsigned.h misc.h fs_free_space.h pslist.h sha1.h vmm.h str.h thread.h tsig.h compat_gettid.h walloc.h eslist.h xmalloc.h override.h malloc.h
chi2.o: chi2.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h chi2.h
ckalloc.o: ckalloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ckalloc.h log.h signal.h unsigned.h vmm.h override.h malloc.h
cmwc.o: cmwc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cmwc.h arc4random.h endian.h entropy.h omalloc.h once.h random.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h walloc.h eslist.h pslist.h
cobs.o: cobs.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cobs.h walloc.h eslist.h pslist.h override.h malloc.h
compat_gettid.o: compat_gettid.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_gettid.h thread.h tsig.h override.h malloc.h
compat_misc.o: compat_misc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_misc.h log.h override.h malloc.h
compat_pause.o: compat_pause.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_pause.h compat_sleep_ms.h thread.h tsig.h compat_gettid.h override.h malloc.h
compat_pio.o: compat_pio.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_pio.h iovec.h misc.h fs_free_space.h pslist.h sha1.h vmm.h once.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h xmalloc.h override.h malloc.h
compat_poll.o: compat_poll.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_poll.h fd.h log.h thread.h tsig.h compat_gettid.h override.h malloc.h
compat_sendfile.o: compat_sendfile.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_sendfile.h compat_pio.h fd.h halloc.h misc.h fs_free_space.h pslist.h sha1.h vmm.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h override.h malloc.h
compat_setjmp.o: compat_setjmp.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_setjmp.h alloca.h log.h signal.h thread.h tsig.h compat_gettid.h override.h malloc.h
compat_sleep_ms.o: compat_sleep_ms.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_sleep_ms.h compat_poll.h thread.h tsig.h compat_gettid.h override.h malloc.h
compat_statvfs.o: compat_statvfs.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_statvfs.h hashing.h xmalloc.h override.h malloc.h
compat_un.o: compat_un.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h
compat_usleep.o: compat_usleep.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h compat_usleep.h thread.h tsig.h compat_gettid.h override.h malloc.h
concat.o: concat.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h concat.h cstr.h glib-missing.h stacktrace.h unsigned.h walloc.h eslist.h pslist.h override.h malloc.h
cond.o: cond.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cond.h elist.h hashing.h xmalloc.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h once.h pow2.h semaphore.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h slist.h glib-missing.h stacktrace.h stringify.h waiter.h walloc.h eslist.h override.h malloc.h
constants.o: constants.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h constants.h hashing.h xmalloc.h hashtable.h omalloc.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h override.h malloc.h
cpufreq.o: cpufreq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cpufreq.h filehead.h override.h malloc.h
cq.o: cq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cq.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h buf.h unsigned.h elist.h entropy.h hashing.h xmalloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h once.h pow2.h stringify.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
crash.o: crash.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h crash.h atio.h atomic.h ckalloc.h compat_pause.h compat_poll.h compat_usleep.h cq.h cstr.h eslist.h evq.h fast_assert.h fd.h file.h ftw.h getcpucount.h halloc.h hashing.h xmalloc.h hashtable.h hstrfn.h iovec.h log.h mempcpy.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h offtime.h tm.h timestamp.h omalloc.h once.h path.h progname.h signal.h spopen.h stacktrace.h str.h stringify.h symbols.h unsigned.h vmea.h walloc.h override.h malloc.h
crc.o: crc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h crc.h override.h malloc.h
cstr.o: cstr.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h cstr.h log.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
dam.o: dam.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dam.h atomic.h cond.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h random.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h walloc.h eslist.h override.h malloc.h
dbmap.o: dbmap.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dbmap.h map.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h patricia.h ohash_table.h glib-missing.h stacktrace.h ../sdbm/sdbm.h bstr.h host_addr.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h debug.h pmsg.h slist.h stringify.h tm.h timestamp.h unsigned.h walloc.h eslist.h override.h malloc.h
dbmw.o: dbmw.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dbmw.h dbmap.h map.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h patricia.h ohash_table.h glib-missing.h stacktrace.h ../sdbm/sdbm.h pmsg.h endian.h host_addr.h misc.h fs_free_space.h pslist.h sha1.h vmm.h slist.h bstr.h debug.h hashlist.h stringify.h tm.h timestamp.h walloc.h eslist.h zalloc.h override.h malloc.h
dbstore.o: dbstore.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../sdbm/sdbm.h dbstore.h dbmw.h dbmap.h map.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h patricia.h ohash_table.h glib-missing.h stacktrace.h pmsg.h endian.h host_addr.h misc.h fs_free_space.h pslist.h sha1.h vmm.h slist.h bstr.h ../if/core/settings.h ../if/gnet_property.h ../lib/prop.h ../lib/event.h ../lib/pslist.h ../lib/mutex.h ../lib/tm.h ../lib/thread.h ../lib/timestamp.h ../lib/misc.h ../lib/host_addr.h ../lib/htable.h ../lib/spinlock.h ../lib/log.h ../if/gnet_property_priv.h atoms.h gnet_host.h hashlist.h vector.h ../lib/unsigned.h file.h halloc.h hstrfn.h log.h path.h stringify.h tm.h override.h malloc.h
dbus_util.o: dbus_util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dbus_util.h halloc.h hstrfn.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h utf8.h override.h malloc.h
debug.o: debug.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h debug.h buf.h unsigned.h misc.h fs_free_space.h pslist.h sha1.h vmm.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h override.h malloc.h
dl_util.o: dl_util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dl_util.h signal.h thread.h tsig.h compat_gettid.h override.h malloc.h
dualhash.o: dualhash.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h dualhash.h hashing.h xmalloc.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h walloc.h eslist.h pslist.h override.h malloc.h
elist.o: elist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h elist.h eslist.h random.h shuffle.h unsigned.h walloc.h pslist.h xmalloc.h override.h malloc.h
entropy.o: entropy.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h entropy.h aje.h atomic.h bigint.h compat_misc.h compat_statvfs.h compat_usleep.h crc.h endian.h getgateway.h host_addr.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h gethomedir.h halloc.h hashing.h xmalloc.h log.h mempcpy.h palloc.h pow2.h rand31.h random.h shuffle.h spinlock.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h tmalloc.h unsigned.h zalloc.h override.h malloc.h
erbtree.o: erbtree.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h erbtree.h unsigned.h override.h malloc.h
eslist.o: eslist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h eslist.h unsigned.h walloc.h pslist.h owlist-gen.c random.h shuffle.h xmalloc.h override.h malloc.h
etree.o: etree.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h etree.h unsigned.h xslist.h override.h malloc.h
eval.o: eval.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h eval.h ascii.h ../casts.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h constants.h cstr.h debug.h gethomedir.h halloc.h hstrfn.h path.h str.h unsigned.h xmalloc.h override.h malloc.h
event.o: event.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h event.h pslist.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h tm.h timestamp.h misc.h fs_free_space.h sha1.h vmm.h omalloc.h stacktrace.h walloc.h eslist.h override.h malloc.h
evq.o: evq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h evq.h cq.h atomic.h elist.h log.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h once.h stacktrace.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h walloc.h eslist.h override.h malloc.h
exit.o: exit.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h exit.h atomic.h crash.h atio.h signal.h thread.h tsig.h compat_gettid.h win32dlp.h xmalloc.h override.h malloc.h
exit2str.o: exit2str.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h exit2str.h buf.h unsigned.h signal.h override.h malloc.h
fast_assert.o: fast_assert.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h fast_assert.h atomic.h crash.h atio.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h stacktrace.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h override.h malloc.h
fd.o: fd.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h fd.h compat_misc.h compat_un.h glib-missing.h stacktrace.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h once.h override.h malloc.h
file.o: file.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h concat.h debug.h fd.h file.h halloc.h hstrfn.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h path.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h override.h malloc.h
file_object.o: file_object.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h file_object.h ../lib/timestamp.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h pslist.h vector.h ../lib/unsigned.h compat_misc.h compat_pio.h cq.h fd.h file.h hikset.h hash.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h hset.h iovec.h once.h path.h str.h stringify.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
filehead.o: filehead.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h filehead.h fd.h file.h parse.h override.h malloc.h
filelock.o: filelock.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h filelock.h compat_misc.h compat_sleep_ms.h compat_usleep.h elist.h fd.h file.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h once.h parse.h random.h signal.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h str.h stringify.h tm.h timestamp.h xmalloc.h override.h malloc.h
filename.o: filename.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h filename.h ascii.h ../casts.h concat.h halloc.h hstrfn.h misc.h fs_free_space.h pslist.h sha1.h vmm.h path.h random.h str.h utf8.h ../if/core/guid.h ../lib/misc.h override.h malloc.h
float.o: float.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h float.h once.h unsigned.h override.h malloc.h
fragcheck.o: fragcheck.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h fragcheck.h
frand.o: frand.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h frand.h file.h random.h override.h malloc.h
fs_free_space.o: fs_free_space.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h fs_free_space.h compat_statvfs.h log.h override.h malloc.h
ftw.o: ftw.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ftw.h erbtree.h eslist.h fd.h halloc.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h path.h stacktrace.h str.h thread.h tsig.h compat_gettid.h walloc.h override.h malloc.h
gentime.o: gentime.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h gentime.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h atomic.h once.h pow2.h spinlock.h thread.h tsig.h compat_gettid.h tm.h override.h malloc.h
getcpucount.o: getcpucount.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h getcpucount.h override.h malloc.h
getdate.o: getdate.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h getdate.h offtime.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h
getgateway.o: getgateway.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h getgateway.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ascii.h ../casts.h compat_usleep.h fd.h mempcpy.h parse.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h timestamp.h tm.h override.h malloc.h
gethomedir.o: gethomedir.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h constants.h gethomedir.h misc.h fs_free_space.h pslist.h sha1.h vmm.h path.h override.h malloc.h
getline.o: getline.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h getline.h halloc.h walloc.h eslist.h pslist.h misc.h fs_free_space.h sha1.h vmm.h unsigned.h override.h malloc.h
getphysmemsize.o: getphysmemsize.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vmm.h getphysmemsize.h
glib-missing.o: glib-missing.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h glib-missing.h stacktrace.h ascii.h ../casts.h compat_poll.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h utf8.h override.h malloc.h
glog.o: glog.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h glog.h log.h str.h thread.h tsig.h compat_gettid.h override.h malloc.h
gnet_host.o: gnet_host.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h atoms.h buf.h unsigned.h hashing.h xmalloc.h mempcpy.h sequence.h list.h plist.h slist.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h walloc.h eslist.h override.h malloc.h
halloc.o: halloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h halloc.h atomic.h dump_options.h entropy.h hashtable.h once.h pagetable.h spinlock.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h unsigned.h walloc.h eslist.h xmalloc.h zalloc.h override.h malloc.h
hash.o: hash.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h endian.h hashing.h xmalloc.h rand31.h random.h unsigned.h vmm.h walloc.h eslist.h pslist.h override.h malloc.h
hashing.o: hashing.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hashing.h xmalloc.h endian.h unsigned.h override.h malloc.h
hashlist.o: hashlist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hashlist.h elist.h hashing.h xmalloc.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h misc.h fs_free_space.h pslist.h sha1.h vmm.h plist.h unsigned.h walloc.h eslist.h override.h malloc.h
hashtable.o: hashtable.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hashtable.h atomic.h hashing.h xmalloc.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h omalloc.h once.h pow2.h rand31.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
header.o: header.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h header.h ascii.h ../casts.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h buf.h unsigned.h getline.h halloc.h hstrfn.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h slist.h str.h stringify.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
hevset.o: hevset.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hevset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h pslist.h xmalloc.h override.h malloc.h
hikset.o: hikset.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hashing.h xmalloc.h unsigned.h walloc.h eslist.h pslist.h override.h malloc.h
host_addr.o: host_addr.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ascii.h ../casts.h buf.h unsigned.h concat.h cstr.h hashing.h xmalloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h parse.h stringify.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
hset.o: hset.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h pslist.h xmalloc.h override.h malloc.h
hstrfn.o: hstrfn.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h hstrfn.h concat.h halloc.h mempcpy.h misc.h fs_free_space.h pslist.h sha1.h vmm.h strpcpy.h strvec.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h override.h malloc.h
htable.o: htable.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h pslist.h xmalloc.h override.h malloc.h
html.o: html.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h fd.h html.h ../lib/array.h html_entities.h misc.h fs_free_space.h pslist.h sha1.h vmm.h utf8.h walloc.h eslist.h override.h malloc.h
http_range.o: http_range.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h http_range.h ascii.h ../casts.h buf.h unsigned.h erbtree.h eslist.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h parse.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h walloc.h override.h malloc.h
idtable.o: idtable.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h idtable.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h random.h walloc.h eslist.h pslist.h override.h malloc.h
inputevt.o: inputevt.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h str.h inputevt.h bit_array.h pow2.h compat_poll.h fd.h glib-missing.h stacktrace.h halloc.h hashlist.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h plist.h stringify.h tm.h timestamp.h walloc.h eslist.h xmalloc.h override.h malloc.h
iovec.o: iovec.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h iovec.h xmalloc.h override.h malloc.h
iprange.o: iprange.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h iprange.h ../lib/host_addr.h ../if/gen/iprange.h parse.h sorted_array.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h walloc.h eslist.h override.h malloc.h
ipset.o: ipset.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ipset.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/host_addr.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h strtok.h walloc.h eslist.h pslist.h override.h malloc.h
iso3166.o: iso3166.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h cstr.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h iso3166.h parse.h override.h malloc.h
launch.o: launch.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h launch.h argv.h override.h malloc.h
leak.o: leak.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h concat.h leak.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h stacktrace.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h xmalloc.h xsort.h override.h malloc.h
list.o: list.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h list.h glib-missing.h stacktrace.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h plist.h walloc.h eslist.h override.h malloc.h
listener.o: listener.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h listener.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h pslist.h hashing.h xmalloc.h pow2.h override.h malloc.h
log.o: log.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h log.h atio.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h ckalloc.h crash.h fd.h glog.h halloc.h hashing.h xmalloc.h hashtable.h offtime.h tm.h thread.h tsig.h compat_gettid.h timestamp.h once.h signal.h spinlock.h str.h stringify.h walloc.h eslist.h override.h malloc.h
magnet.o: magnet.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h magnet.h ../lib/gnet_host.h ../lib/hashlist.h ../lib/host_addr.h ../lib/endian.h ../lib/glib-missing.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/vector.h ../lib/unsigned.h ../lib/host_addr.h ../lib/misc.h ../lib/pslist.h ../lib/sequence.h ../lib/list.h ../lib/plist.h ../lib/slist.h ascii.h ../casts.h atoms.h gnet_host.h concat.h halloc.h hstrfn.h once.h parse.h sequence.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h tokenizer.h unsigned.h url.h urn.h utf8.h walloc.h eslist.h pslist.h ../if/core/guid.h override.h malloc.h
malloc.o: malloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h cq.h hashing.h xmalloc.h hashtable.h leak.h log.h omalloc.h once.h parse.h path.h pow2.h spinlock.h thread.h tsig.h compat_gettid.h str.h stringify.h tm.h timestamp.h unsigned.h vsort.h zalloc.h override.h malloc.h
map.o: map.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h map.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h patricia.h ohash_table.h glib-missing.h stacktrace.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h debug.h random.h stringify.h tm.h timestamp.h walloc.h eslist.h xmalloc.h override.h malloc.h
mem.o: mem.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h mem.h atomic.h fd.h file.h log.h spinlock.h thread.h tsig.h compat_gettid.h unsigned.h vmm.h override.h malloc.h
mempcpy.o: mempcpy.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h mempcpy.h
memusage.o: memusage.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h memusage.h cq.h dump_options.h hashtable.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h stacktrace.h str.h stringify.h tm.h timestamp.h unsigned.h vsort.h xmalloc.h override.h malloc.h
mime_type.o: mime_type.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h mime_type.h ../lib/mime_types.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h mime_types.h
mingw32.o: mingw32.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h
misc.o: misc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ascii.h ../casts.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h vector.h ../lib/unsigned.h base16.h base32.h buf.h unsigned.h compat_misc.h concat.h cstr.h entropy.h halloc.h hstrfn.h htable.h hash.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h html_entities.h log.h mempcpy.h once.h parse.h path.h pow2.h random.h str.h stringify.h tm.h timestamp.h utf8.h walloc.h eslist.h ../if/core/guid.h ../lib/misc.h override.h malloc.h
mtwist.o: mtwist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h mtwist.h aje.h omalloc.h once.h random.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h stacktrace.h walloc.h eslist.h pslist.h
mutex.o: mutex.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h crash.h atio.h log.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
nid.o: nid.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h nid.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h buf.h unsigned.h hashing.h xmalloc.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h override.h malloc.h
nv.o: nv.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h nv.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h halloc.h hashing.h xmalloc.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h override.h malloc.h
offtime.o: offtime.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h offtime.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
ohash_table.o: ohash_table.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ohash_table.h glib-missing.h stacktrace.h hashlist.h walloc.h eslist.h pslist.h override.h malloc.h
omalloc.o: omalloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h omalloc.h atomic.h dump_options.h glib-missing.h stacktrace.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h pow2.h signal.h spinlock.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h unsigned.h xmalloc.h override.h malloc.h
once.o: once.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h once.h atomic.h balloc.h compat_usleep.h cond.h hashtable.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h pcell.h pslist.h override.h malloc.h
options.o: options.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h options.h misc.h fs_free_space.h pslist.h sha1.h vmm.h str.h override.h malloc.h
ostream.o: ostream.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ostream.h fd.h halloc.h hstrfn.h pmsg.h endian.h host_addr.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h slist.h str.h walloc.h eslist.h override.h malloc.h
pagetable.o: pagetable.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h pagetable.h misc.h fs_free_space.h pslist.h sha1.h vmm.h xmalloc.h override.h malloc.h
palloc.o: palloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h palloc.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h cq.h dump_options.h elist.h entropy.h eslist.h evq.h log.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h once.h stringify.h tm.h timestamp.h unsigned.h walloc.h xmalloc.h override.h malloc.h
parse.o: parse.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h parse.h ascii.h ../casts.h misc.h fs_free_space.h pslist.h sha1.h vmm.h endian.h override.h malloc.h
path.o: path.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h concat.h halloc.h hstrfn.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h omalloc.h path.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h override.h malloc.h
patricia.o: patricia.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h patricia.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h pow2.h random.h walloc.h eslist.h xmalloc.h override.h malloc.h
pattern.o: pattern.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h pattern.h ascii.h ../casts.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h op.h pow2.h random.h stats.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h walloc.h eslist.h xmalloc.h override.h malloc.h
plist.o: plist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h plist.h elist.h log.h pcell.h pslist.h random.h walloc.h eslist.h override.h malloc.h
pmsg.o: pmsg.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h pmsg.h endian.h host_addr.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h slist.h halloc.h log.h mempcpy.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h walloc.h eslist.h override.h malloc.h
pow2.o: pow2.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h pow2.h override.h malloc.h
product.o: product.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h product.h cstr.h halloc.h misc.h fs_free_space.h pslist.h sha1.h vmm.h omalloc.h parse.h override.h malloc.h
progname.o: progname.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h progname.h iovec.h mem.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h once.h path.h product.h strvec.h tm.h timestamp.h xmalloc.h override.h malloc.h
prop.o: prop.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h prop.h event.h pslist.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h tm.h timestamp.h misc.h fs_free_space.h sha1.h vmm.h host_addr.h endian.h glib-missing.h stacktrace.h htable.h hash.h ascii.h ../casts.h concat.h debug.h file.h getdate.h halloc.h hstrfn.h parse.h path.h product.h str.h stringify.h walloc.h eslist.h xmalloc.h override.h malloc.h
pslist.o: pslist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h pslist.h eslist.h log.h pcell.h random.h walloc.h override.h malloc.h
qlock.o: qlock.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h qlock.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h crash.h atio.h gentime.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h hashing.h xmalloc.h log.h pow2.h str.h tm.h override.h malloc.h
rand31.o: rand31.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h rand31.h atomic.h endian.h entropy.h hashing.h xmalloc.h log.h mempcpy.h random.h spinlock.h thread.h tsig.h compat_gettid.h stacktrace.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
random.o: random.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h random.h aje.h arc4random.h atomic.h cmwc.h dump_options.h endian.h entropy.h evq.h cq.h float.h listener.h spinlock.h thread.h tsig.h compat_gettid.h pslist.h log.h mempcpy.h misc.h fs_free_space.h sha1.h vmm.h mtwist.h once.h pow2.h stringify.h tm.h timestamp.h teq.h unsigned.h walloc.h eslist.h well.h override.h malloc.h
rbtree.o: rbtree.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h rbtree.h erbtree.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h walloc.h eslist.h pslist.h override.h malloc.h
regex.o: regex.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h
ripening.o: ripening.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ripening.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h cq.h erbtree.h hashing.h xmalloc.h hikset.h hash.h mutex.h spinlock.h atomic.h walloc.h eslist.h override.h malloc.h
rwlock.o: rwlock.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h rwlock.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h compat_usleep.h crash.h atio.h gentime.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h getcpucount.h log.h stringify.h tm.h override.h malloc.h
sectoken.o: sectoken.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sectoken.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h timestamp.h cq.h hashing.h xmalloc.h random.h tea.h unsigned.h walloc.h eslist.h override.h malloc.h
semaphore.o: semaphore.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h semaphore.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h alloca.h atomic.h bit_array.h pow2.h elist.h once.h signal.h spinlock.h stringify.h unsigned.h walloc.h eslist.h override.h malloc.h
sequence.o: sequence.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sequence.h hashlist.h list.h glib-missing.h stacktrace.h plist.h pslist.h slist.h vector.h ../lib/unsigned.h walloc.h eslist.h override.h malloc.h
setproctitle.o: setproctitle.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h setproctitle.h buf.h unsigned.h progname.h override.h malloc.h
sha1.o: sha1.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h endian.h sha1.h misc.h fs_free_space.h pslist.h vmm.h override.h malloc.h
shuffle.o: shuffle.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h shuffle.h arc4random.h cmwc.h mtwist.h random.h unsigned.h well.h override.h malloc.h
signal.o: signal.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h signal.h atomic.h buf.h unsigned.h ckalloc.h crash.h atio.h dl_util.h glib-missing.h stacktrace.h log.h mem.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h once.h registers.h str.h stringify.h tm.h timestamp.h override.h malloc.h
slist.o: slist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h slist.h glib-missing.h stacktrace.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h walloc.h eslist.h override.h malloc.h
smsort.o: smsort.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h op.h pow2.h smsort.h unsigned.h override.h malloc.h
sorted_array.o: sorted_array.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h sorted_array.h bsearch.h unsigned.h pslist.h halloc.h log.h misc.h fs_free_space.h sha1.h vmm.h vsort.h walloc.h eslist.h override.h malloc.h
spinlock.o: spinlock.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h compat_usleep.h crash.h atio.h gentime.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h getcpucount.h log.h override.h malloc.h
spopen.o: spopen.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h spopen.h argv.h exit2str.h fd.h file.h halloc.h hashtable.h once.h override.h malloc.h
stacktrace.o: stacktrace.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h stacktrace.h atio.h atomic.h bfd_util.h concat.h constants.h crash.h dl_util.h eslist.h file.h halloc.h hashing.h xmalloc.h log.h mem.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h omalloc.h once.h path.h signal.h str.h stringify.h tm.h timestamp.h symbols.h unsigned.h hashtable.h override.h malloc.h 
stats.o: stats.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h stats.h elist.h halloc.h walloc.h eslist.h pslist.h override.h malloc.h
str.o: str.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ascii.h ../casts.h ckalloc.h float.h glib-missing.h stacktrace.h halloc.h log.h mempcpy.h misc.h fs_free_space.h pslist.h sha1.h vmm.h omalloc.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h unsigned.h walloc.h eslist.h override.h malloc.h
stringify.o: stringify.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ascii.h ../casts.h buf.h unsigned.h cstr.h endian.h halloc.h mempcpy.h str.h override.h malloc.h
strpcpy.o: strpcpy.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h strpcpy.h
strtok.o: strtok.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h strtok.h ascii.h ../casts.h endian.h unsigned.h utf8.h walloc.h eslist.h pslist.h override.h malloc.h
strvec.o: strvec.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h strvec.h mempcpy.h misc.h fs_free_space.h pslist.h sha1.h vmm.h unsigned.h override.h malloc.h
symbols.o: symbols.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h symbols.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h array_util.h ascii.h ../casts.h base16.h bfd_util.h constants.h cstr.h eslist.h file.h halloc.h htable.h hash.h mutex.h spinlock.h atomic.h log.h omalloc.h parse.h path.h rwlock.h stacktrace.h str.h stringify.h unsigned.h xmalloc.h xsort.h override.h malloc.h
symtab.o: symtab.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h symtab.h nv.h pslist.h unsigned.h walloc.h eslist.h override.h malloc.h
tea.o: tea.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tea.h endian.h random.h override.h malloc.h
teq.o: teq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h teq.h atomic.h cq.h eslist.h evq.h inputevt.h log.h once.h pow2.h spinlock.h thread.h tsig.h compat_gettid.h stacktrace.h str.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h waiter.h walloc.h override.h malloc.h
thread.o: thread.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h thread.h tsig.h compat_gettid.h alloca.h atomic.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h barrier.h buf.h unsigned.h compat_poll.h compat_sleep_ms.h compat_usleep.h cond.h constants.h cq.h crash.h atio.h cstr.h dam.h dump_options.h entropy.h eslist.h evq.h fd.h gentime.h timestamp.h hashing.h xmalloc.h hashtable.h log.h mem.h mutex.h spinlock.h omalloc.h once.h pow2.h qlock.h rwlock.h semaphore.h tm.h signal.h slist.h str.h stringify.h walloc.h zalloc.h override.h malloc.h
tiger.o: tiger.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h base32.h tiger.h override.h malloc.h tiger_sboxes.h
tigertree.o: tigertree.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tigertree.h ../lib/tiger.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h base32.h endian.h halloc.h misc.h unsigned.h override.h malloc.h
timestamp.o: timestamp.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h ascii.h ../casts.h buf.h unsigned.h offtime.h tm.h thread.h tsig.h compat_gettid.h parse.h str.h stringify.h override.h malloc.h
tm.o: tm.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h atomic.h compat_sleep_ms.h gentime.h listener.h spinlock.h progname.h offtime.h once.h override.h malloc.h
tmalloc.o: tmalloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tmalloc.h array_util.h atomic.h crash.h atio.h dump_options.h entropy.h eslist.h evq.h cq.h glib-missing.h stacktrace.h log.h omalloc.h once.h pslist.h sha1.h spinlock.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h misc.h fs_free_space.h vmm.h unsigned.h walloc.h xmalloc.h override.h malloc.h
tokenizer.o: tokenizer.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tokenizer.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
tqsort.o: tqsort.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tqsort.h atomic.h getcpucount.h log.h once.h thread.h tsig.h compat_gettid.h xsort.h
tsig.o: tsig.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h tsig.h override.h malloc.h
url.o: url.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h url.h ascii.h ../casts.h debug.h glib-missing.h stacktrace.h halloc.h host_addr.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h hstrfn.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h mempcpy.h parse.h path.h str.h walloc.h eslist.h override.h malloc.h
urn.o: urn.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h base16.h base32.h misc.h fs_free_space.h pslist.h sha1.h vmm.h urn.h override.h malloc.h
utf8.o: utf8.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h utf8_tables.h utf8.h ascii.h ../casts.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h concat.h debug.h halloc.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hstrfn.h htable.h mempcpy.h path.h random.h str.h stringify.h tm.h timestamp.h unsigned.h walloc.h eslist.h override.h malloc.h
vector.o: vector.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vector.h ../lib/unsigned.h walloc.h eslist.h pslist.h override.h malloc.h
vendors.o: vendors.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vendors.h ascii.h ../casts.h buf.h unsigned.h cstr.h endian.h misc.h fs_free_space.h pslist.h sha1.h vmm.h override.h malloc.h
vmea.o: vmea.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vmea.h bit_array.h pow2.h log.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h stacktrace.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h unsigned.h xmalloc.h override.h malloc.h
vmm.o: vmm.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vmm.h alloca.h array_util.h ascii.h ../casts.h atomic.h cq.h crash.h atio.h dump_options.h entropy.h evq.h fd.h log.h memusage.h misc.h fs_free_space.h pslist.h sha1.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h omalloc.h once.h parse.h pow2.h rwlock.h signal.h stacktrace.h str.h stringify.h tm.h timestamp.h tmalloc.h unsigned.h vmea.h xmalloc.h zalloc.h override.h malloc.h
vsort.o: vsort.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h vsort.h log.h op.h pow2.h random.h smsort.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h tqsort.h unsigned.h xsort.h override.h malloc.h
waiter.o: waiter.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h waiter.h elist.h fd.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h walloc.h eslist.h override.h malloc.h
walloc.o: walloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h walloc.h eslist.h pslist.h atomic.h evq.h cq.h log.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h once.h pow2.h str.h stringify.h tm.h timestamp.h misc.h fs_free_space.h sha1.h vmm.h tmalloc.h unsigned.h xmalloc.h zalloc.h override.h malloc.h
watcher.o: watcher.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h watcher.h file.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h vector.h ../lib/unsigned.h cq.h halloc.h hikset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h once.h path.h walloc.h eslist.h override.h malloc.h
wd.o: wd.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h wd.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h atoms.h gnet_host.h hashlist.h host_addr.h endian.h glib-missing.h stacktrace.h vector.h ../lib/unsigned.h cq.h log.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h tm.h walloc.h eslist.h override.h malloc.h
well.o: well.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h well.h arc4random.h endian.h entropy.h omalloc.h once.h random.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h walloc.h eslist.h pslist.h
win32dlp.o: win32dlp.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h
wordvec.o: wordvec.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h wordvec.h halloc.h hstrfn.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h unsigned.h utf8.h walloc.h eslist.h pslist.h zalloc.h override.h malloc.h
wq.o: wq.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h wq.h ../lib/vmm.h cq.h hashing.h xmalloc.h hashlist.h htable.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h log.h stacktrace.h stringify.h tm.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h walloc.h eslist.h override.h malloc.h
xmalloc.o: xmalloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xmalloc.h array_util.h atomic.h bit_array.h pow2.h crash.h atio.h dump_options.h elist.h endian.h entropy.h erbtree.h evq.h cq.h hashing.h log.h mem.h mempcpy.h memusage.h misc.h fs_free_space.h pslist.h sha1.h vmm.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h omalloc.h once.h palloc.h signal.h str.h stringify.h tm.h timestamp.h unsigned.h win32dlp.h xsort.h zalloc.h override.h malloc.h
xslist.o: xslist.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xslist.h unsigned.h owlist-gen.c random.h shuffle.h xmalloc.h override.h malloc.h
xsort.o: xsort.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xsort.h getphysmemsize.h mempcpy.h op.h pow2.h unsigned.h vmm.h override.h malloc.h xsort-gen.c
xsort_data.o: xsort_data.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xsort_data.h getphysmemsize.h mempcpy.h op.h pow2.h unsigned.h vmm.h override.h malloc.h xsort-gen.c
xxtea.o: xxtea.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h xxtea.h random.h unsigned.h override.h malloc.h
zalloc.o: zalloc.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h zalloc.h array_util.h atomic.h dump_options.h entropy.h eslist.h evq.h cq.h hashing.h xmalloc.h hashtable.h leak.h log.h memusage.h misc.h fs_free_space.h pslist.h sha1.h vmm.h once.h spinlock.h thread.h tsig.h compat_gettid.h stacktrace.h str.h stringify.h tm.h timestamp.h unsigned.h xsort.h override.h malloc.h
zlib_util.o: zlib_util.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h zlib_util.h glib-missing.h stacktrace.h misc.h fs_free_space.h pslist.h sha1.h vmm.h halloc.h unsigned.h walloc.h eslist.h override.h malloc.h
filelock-test.o: filelock-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h concat.h exit2str.h fd.h file.h filelock.h halloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hstrfn.h htable.h launch.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h progname.h spopen.h stacktrace.h str.h strtok.h tm.h timestamp.h walloc.h eslist.h override.h malloc.h
float-test.o: float-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h float.h progname.h
ftw-test.o: ftw-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h etree.h ftw.h halloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hstrfn.h misc.h fs_free_space.h pslist.h sha1.h vmm.h progname.h stacktrace.h str.h stringify.h tm.h timestamp.h strtok.h walloc.h eslist.h override.h malloc.h
launch-test.o: launch-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h concat.h exit2str.h file.h glib-missing.h stacktrace.h halloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hstrfn.h htable.h launch.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h progname.h str.h stringify.h tm.h timestamp.h strtok.h walloc.h eslist.h override.h malloc.h
pattern-test.o: pattern-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h log.h pattern.h progname.h random.h stats.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h unsigned.h xmalloc.h
random-test.o: random-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../lib/aje.h ../lib/arc4random.h ../lib/chi2.h ../lib/cmwc.h ../lib/entropy.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/mtwist.h ../lib/parse.h ../lib/pow2.h ../lib/progname.h ../lib/rand31.h ../lib/random.h ../lib/shuffle.h ../lib/stats.h ../lib/str.h ../lib/stringify.h ../lib/tm.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/timestamp.h ../lib/misc.h ../lib/teq.h ../lib/thread.h ../lib/tm.h ../lib/well.h ../lib/xmalloc.h
sort-test.o: sort-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h ../lib/base16.h ../lib/htable.h ../lib/hash.h ../lib/mutex.h ../lib/spinlock.h ../lib/atomic.h ../lib/thread.h ../lib/tsig.h ../lib/compat_gettid.h ../lib/misc.h ../lib/fs_free_space.h ../lib/pslist.h ../lib/sha1.h ../lib/vmm.h ../lib/progname.h ../lib/rand31.h ../lib/sha1.h ../lib/smsort.h ../lib/str.h ../lib/stringify.h ../lib/tm.h ../lib/timestamp.h ../lib/misc.h ../lib/tm.h ../lib/tqsort.h ../lib/xmalloc.h ../lib/xsort.h
spopen-test.o: spopen-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h concat.h exit2str.h fd.h file.h glib-missing.h stacktrace.h halloc.h hset.h hash.h mutex.h spinlock.h atomic.h thread.h tsig.h compat_gettid.h hstrfn.h htable.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h progname.h signal.h spopen.h str.h strtok.h walloc.h eslist.h override.h malloc.h
stack-test.o: stack-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h progname.h stacktrace.h str.h
stat-test.o: stat-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h fd.h log.h progname.h str.h stringify.h tm.h thread.h tsig.h compat_gettid.h timestamp.h misc.h fs_free_space.h pslist.h sha1.h vmm.h
thread-test.o: thread-test.c ../common.h ../../config.h ../types.h ../gcc.h ../lib/mingw32.h ../casts.h ../lib/compat_setjmp.h ../lib/fast_assert.h ../lib/exit.h ../lib/glog.h ../lib/stacktrace.h ../lib/log.h ../lib/pattern.h aq.h atio.h atomic.h barrier.h compat_poll.h compat_sleep_ms.h cond.h cq.h crash.h dam.h evq.h getcpucount.h halloc.h hset.h hash.h mutex.h spinlock.h thread.h tsig.h compat_gettid.h hstrfn.h log.h misc.h fs_free_space.h pslist.h sha1.h vmm.h once.h parse.h path.h progname.h qlock.h random.h rwlock.h semaphore.h tm.h timestamp.h shuffle.h signal.h stacktrace.h str.h stringify.h strtok.h teq.h vmea.h waiter.h 
