########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ..
CURRENT = pixmaps
DIR = pixmaps/
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

PIXMAPS = \
	arrow_down.xpm \
	arrow_up.xpm \
	booklib.xpm \
	booksha.xpm \
	bookshav.xpm \
	booktth.xpm \
	booktthv.xpm \
	chip.xpm \
	clanbomber_red.xpm \
	clanbomber_yellow.xpm \
	download.xpm \
	exit.xpm \
	filter.xpm \
	firewall.xpm \
	firewall_punchable.xpm \
	firewall_tcp.xpm \
	firewall_udp.xpm \
	firewall_udp_punchable.xpm \
	freeze.xpm \
	go_back.xpm \
	hungup.xpm \
	icon.16x16.xpm \
	icon.48x48.xpm \
	icon.xpm \
	leaf.xpm \
	legacy.xpm \
	magnet.16x16.png \
	magnet.32x32.png \
	magnet.64x64.png \
	natpmp.xpm \
	no_firewall.xpm \
	no_listening.xpm \
	offline.xpm \
	online.xpm \
	pause.xpm \
	save.xpm \
	smallserver.xpm \
	star-black.xpm \
	star-blue.xpm \
	star-green.xpm \
	star-red.xpm \
	star-violet.xpm \
	star-yellow.xpm \
	stock_form-time-field-16.xpm \
	thaw.xpm \
	ultra.xpm \
	upload-red.xpm \
	upload-yellow.xpm \
	upload.xpm \
	upnp-unusable.xpm \
	upnp.xpm \
	warning.xpm

all::

INSTALLFLAGS = -m 444

local_install:: $(PIXMAPS)
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(PRIVLIB)/pixmaps || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(PRIVLIB)/pixmaps); \
	for i in $(PIXMAPS); do \
		(set -x; $(INSTALL) -c $(INSTALLFLAGS) \
			$$i $(INSTALL_PREFIX)$(PRIVLIB)/pixmaps) || exit 1;\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for i in $(PIXMAPS); do \
		(set -x; $(RM) $(INSTALL_PREFIX)$(PRIVLIB)/pixmaps/$$i); \
	done

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

