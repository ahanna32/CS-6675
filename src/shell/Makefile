########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = src/shell
DIR = src/shell/

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = cc
CTAGS = ctags
JCFLAGS = $(CFLAGS) -O2 -g -pthread -pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow 
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
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

# $X-Id: Jmakefile 14365 2007-08-08 05:05:08Z cbiere $

SRC = \
	command.c \
	date.c \
	download.c \
	downloads.c \
	echo.c \
	help.c \
	horizon.c \
	intr.c \
	lib.c \
	log.c \
	memory.c \
	node.c \
	nodes.c \
	offline.c \
	online.c \
	pid.c \
	print.c \
	props.c \
	quit.c \
	random.c \
	rescan.c \
	search.c \
	set.c \
	shell.c \
	shutdown.c \
	stats.c \
	status.c \
	task.c \
	thread.c \
	uploads.c \
	version.c \
	whatis.c

OBJ = \
	command.o \
	date.o \
	download.o \
	downloads.o \
	echo.o \
	help.o \
	horizon.o \
	intr.o \
	lib.o \
	log.o \
	memory.o \
	node.o \
	nodes.o \
	offline.o \
	online.o \
	pid.o \
	print.o \
	props.o \
	quit.o \
	random.o \
	rescan.o \
	search.o \
	set.o \
	shell.o \
	shutdown.o \
	stats.o \
	status.o \
	task.o \
	thread.o \
	uploads.o \
	version.o \
	whatis.o 

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I.. $(GLIB_CFLAGS) -DCORE_SOURCES -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

IF = ../if
GNET_PROPS = gnet_property.h

.FORCE:

$(IF)/$(GNET_PROPS): .FORCE
	@echo "Checking "$(GNET_PROPS)" in "$(IF)"..."
	cd $(IF); $(MAKE) $(GNET_PROPS)
	@echo "Continuing in $(CURRENT)..."

libcore.a:  $(IF)/$(GNET_PROPS)

all:: libshell.a

local_realclean::
	$(RM) libshell.a

libshell.a:  $(OBJ)
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
