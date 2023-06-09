########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:47 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ..
CURRENT = extra_files
DIR = extra_files/
INSTALL = /usr/bin/install
INSTALLDIR = mkdir -p

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

CTAGS = ctags
INSTALLPREFIX = /usr/local
JCPPFLAGS = -W -Wall -Wformat=2 -Wshadow
MV = /usr/bin/mv
PRIVLIB = /usr/local/share/gtk-gnutella
RM = /usr/bin/rm -f

########################################################################
# Automatically generated parameters -- do not edit

SUBDIRS = el en it fr ja tr

########################################################################
# Jmake rules for building libraries, programs, scripts, and data files
# $X-Id$

########################################################################
# Start of Jmakefile

# $X-Id$

all::

EXTRA_FILES = \
	bogons.txt \
	favicon.png \
	geo-ip.txt \
	geo-ipv6.txt \
	gwcache.boot \
	hostiles.txt \
	robots.txt \
	spam.txt \
	spam_sha1.txt

PIXMAP_FILES = \
	gtk-gnutella.png	\
	gtk-gnutella.svg

DESKTOP_FILES = \
	gtk-gnutella.desktop

APPDATA_FILES = \
	gtk-gnutella.appdata.xml

INSTALLFLAGS = -m 444

local_install local_install-strip::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for dir in $(PRIVLIB); do	\
		(set -x; test -d $(INSTALL_PREFIX)$$dir || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$$dir);	\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for dir in $(PRIVLIB); do \
		(set -x; test -d $$dir && $(RM) -r $(INSTALL_PREFIX)$$dir); \
	done

local_install:: $(EXTRA_FILES)
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(PRIVLIB) || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(PRIVLIB)); \
	for i in $(EXTRA_FILES); do \
		(set -x; $(INSTALL) -c $(INSTALLFLAGS) \
			$$i $(INSTALL_PREFIX)$(PRIVLIB)) || exit 1;\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for i in $(EXTRA_FILES); do \
		(set -x; $(RM) $(INSTALL_PREFIX)$(PRIVLIB)/$$i); \
	done

local_install:: $(DESKTOP_FILES)
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/applications || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/applications); \
	for i in $(DESKTOP_FILES); do \
		(set -x; $(INSTALL) -c $(INSTALLFLAGS) \
			$$i $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/applications) || exit 1;\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for i in $(DESKTOP_FILES); do \
		(set -x; $(RM) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/applications/$$i); \
	done

local_install:: $(APPDATA_FILES)
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/appdata || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/appdata); \
	for i in $(APPDATA_FILES); do \
		(set -x; $(INSTALL) -c $(INSTALLFLAGS) \
			$$i $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/appdata) || exit 1;\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for i in $(APPDATA_FILES); do \
		(set -x; $(RM) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/appdata/$$i); \
	done

local_install:: $(PIXMAP_FILES)
	@case '${MFLAGS}' in *[i]*) set +e;; esac;		\
	(set -x; test -d $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/pixmaps || \
		$(INSTALLDIR) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/pixmaps); \
	for i in $(PIXMAP_FILES); do \
		(set -x; $(INSTALL) -c $(INSTALLFLAGS) \
			$$i $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/pixmaps) || exit 1;\
	done

local_deinstall::
	@case '${MFLAGS}' in *[i]*) set +e;; esac; \
	for i in $(PIXMAP_FILES); do \
		(set -x; $(RM) $(INSTALL_PREFIX)$(INSTALLPREFIX)/share/pixmaps/$$i); \
	done

#
# Update the bogons and GeoIp databases
#

update: update_bogons geo-ip.txt geo-ipv6.txt

update_bogons:
# Target disabled, site seems to be down definitively? -- RAM, 2009-01-16
	: wget http://www.completewhois.com/bogons/data/bogons-cidr-all.txt \
		-O bogons.txt

URL4 = https://download.ip2location.com/lite/IP2LOCATION-LITE-DB1.CSV.ZIP
URL6 = https://download.ip2location.com/lite/IP2LOCATION-LITE-DB1.IPV6.CSV.ZIP
GEODB4 = IP2LOCATION-LITE-DB1.CSV
GEODB6 = IP2LOCATION-LITE-DB1.IPV6.CSV
TMP = tmp

.FORCE:

$(GEODB4).ZIP: .FORCE
	@if test -f $(TOP)/.package; then \
		wget -N $(URL4); \
	else touch $@; fi

$(GEODB6).ZIP: .FORCE
	@if test -f $(TOP)/.package; then \
		wget -N $(URL6); \
	else touch $@; fi

geo-ip.txt: $(GEODB4).ZIP
	@if test -f $(TOP)/.package; then \
		rm -rf $(TMP); \
		mkdir $(TMP); \
		(cd $(TMP); unzip ../$(GEODB4).ZIP); \
		(cd $(TMP); \
			../$(TOP)/scripts/geo-to-db.pl -ic $(GEODB4) >../geo-ip.txt); \
	else touch $@; fi

geo-ipv6.txt: $(GEODB6).ZIP
	@if test -f $(TOP)/.package; then \
		rm -rf $(TMP); \
		mkdir $(TMP); \
		(cd $(TMP); unzip ../$(GEODB6).ZIP); \
		(cd $(TMP); \
			../$(TOP)/scripts/geo6-to-db.pl -i $(GEODB6) >../geo-ipv6.txt); \
	else touch $@; fi

local_clean::
	rm -rf $(TMP)
	rm -f $(GEODB4).ZIP
	rm -f $(GEODB6).ZIP

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

