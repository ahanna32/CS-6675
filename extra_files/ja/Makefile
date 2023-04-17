########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:47 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../..
CURRENT = extra_files/ja
DIR = extra_files/ja/
INSTALL = /usr/bin/install
INSTALLDIR = mkdir -p

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

CTAGS = ctags
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
MV = /usr/bin/mv
PRIVLIB = /usr/local/share/gtk-gnutella
RM = /usr/bin/rm -f

########################################################################
# Jmake rules for building libraries, programs, scripts, and data files
# $X-Id$

########################################################################
# Start of Jmakefile

# $X-Id$

all::

FAQDIR = $(PRIVLIB)/ja

local_install local_install-strip:: FAQ
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(FAQDIR) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(FAQDIR)); \
	$(INSTALL) -c -m 444 FAQ $(INSTALL_PREFIX)$(FAQDIR)

local_deinstall::
	$(RM) $(INSTALL_PREFIX)$(FAQDIR)/FAQ

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

