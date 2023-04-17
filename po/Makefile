# Makefile for PO directory in any package using GNU gettext.
# Copyright (C) 1995-1997, 2000-2003 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file can be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU General Public
# License but which still want to provide support for the GNU gettext
# functionality.
# Please note that the actual code of GNU gettext is covered by the GNU
# General Public License and is *not* in the public domain.

PACKAGE = gtk-gnutella
VERSION = 1.2.2

SHELL = /bin/sh
#

srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = /usr/local
datadir = /usr/local/share
localedir = /usr/local/share/locale

INSTALL = /usr/bin/install
INSTALL_DATA = $(INSTALL) -m 644
mkinstalldirs = mkdir -p
DESTDIR = $(INSTALL_PREFIX)

GMSGFMT = /usr/bin/msgfmt
GMSGFMT_FLAGS =--statistics -c
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
MSGMERGE = /usr/bin/msgmerge
MSGMERGE_UPDATE = /usr/bin/msgmerge --update
MSGINIT = msginit
MSGCONV = msgconv
MSGFILTER = msgfilter

POTFILES = \
	../ \
	../src/core/ban.c \
	../src/core/downloads.c \
	../src/core/fileinfo.c \
	../src/core/g2/gwc.c \
	../src/core/ghc.c \
	../src/core/nodes.c \
	../src/core/parq.c \
	../src/core/rx_link.c \
	../src/core/search.c \
	../src/core/settings.c \
	../src/core/sockets.c \
	../src/core/tx_link.c \
	../src/core/uhc.c \
	../src/core/uploads.c \
	../src/core/version.c \
	../src/coverity.c \
	../src/if/gen/gnr_stats.c \
	../src/if/gen/msg.c \
	../src/if/gen/msg_drop.c \
	../src/if/gnet_property.c \
	../src/if/gui_property.c \
	../src/lib/aje.c \
	../src/lib/iso3166.c \
	../src/lib/magnet.c \
	../src/lib/misc.c \
	../src/lib/stringify.c \
	../src/lib/utf8.c \
	../src/main.c \
	../src/shell/download.c \
	../src/shell/help.c \
	../src/shell/horizon.c \
	../src/shell/intr.c \
	../src/shell/lib.c \
	../src/shell/log.c \
	../src/shell/memory.c \
	../src/shell/node.c \
	../src/shell/print.c \
	../src/shell/props.c \
	../src/shell/quit.c \
	../src/shell/random.c \
	../src/shell/search.c \
	../src/shell/set.c \
	../src/shell/shell.c \
	../src/shell/stats.c \
	../src/shell/task.c \
	../src/shell/thread.c \
	../src/shell/whatis.c \
	../src/ui/gtk/downloads_common.c \
	../src/ui/gtk/filter.c \
	../src/ui/gtk/filter_core.c \
	../src/ui/gtk/gnet_stats_common.c \
	../src/ui/gtk/gtk1/callbacks.c \
	../src/ui/gtk/gtk1/interface-glade.t \
	../src/ui/gtk/gtk1/nodes.c \
	../src/ui/gtk/gtk1/search.c \
	../src/ui/gtk/gtk1/search_stats.c \
	../src/ui/gtk/gtk1/support-glade.c \
	../src/ui/gtk/gtk1/uploads.c \
	../src/ui/gtk/gtk2/callbacks.c \
	../src/ui/gtk/gtk2/fileinfo.c \
	../src/ui/gtk/gtk2/gnet_stats.c \
	../src/ui/gtk/gtk2/hcache.c \
	../src/ui/gtk/gtk2/interface-glade.c \
	../src/ui/gtk/gtk2/monitor.c \
	../src/ui/gtk/gtk2/nodes.c \
	../src/ui/gtk/gtk2/search.c \
	../src/ui/gtk/gtk2/search_cb.c \
	../src/ui/gtk/gtk2/search_stats.c \
	../src/ui/gtk/gtk2/support-glade.c \
	../src/ui/gtk/gtk2/uploads.c \
	../src/ui/gtk/gtk2/upload_stats.c \
	../src/ui/gtk/gtkcolumnchooser.c \
	../src/ui/gtk/gtk-missing.c \
	../src/ui/gtk/gtk-shared/callbacks.c \
	../src/ui/gtk/hcache_common.c \
	../src/ui/gtk/icon.c \
	../src/ui/gtk/main.c \
	../src/ui/gtk/main_cb.c \
	../src/ui/gtk/misc.c \
	../src/ui/gtk/nodes_common.c \
	../src/ui/gtk/search_common.c \
	../src/ui/gtk/settings.c \
	../src/ui/gtk/settings_cb.c \
	../src/ui/gtk/uploads_common.c

POFILES =  de.po el.po es.po fr.po hu.po it.po ja.po nb.po nl.po tr.po uk.po zh_CN.po
GMOFILES =  de.po el.po es.po fr.po hu.po it.po ja.po nb.po nl.po tr.po uk.po zh_CN.po
UPDATEPOFILES =  de.po-update el.po-update es.po-update fr.po-update hu.po-update it.po-update ja.po-update nb.po-update nl.po-update tr.po-update uk.po-update zh_CN.po-update
DUMMYPOFILES =  de.nop el.nop es.nop fr.nop hu.nop it.nop ja.nop nb.nop nl.nop tr.nop uk.nop zh_CN.nop

CATALOGS =  de.gmo el.gmo es.gmo fr.gmo hu.gmo it.gmo ja.gmo nb.gmo nl.gmo tr.gmo uk.gmo zh_CN.gmo

all: all-yes
install-data: install-data-yes
installdirs-data: installdirs-data-yes
uninstall-data: uninstall-data-yes

# Makefile variables for PO directory in any package using GNU gettext.

# Usually the message domain is the same as the package name.
DOMAIN = $(PACKAGE)

# These two variables depend on the location of this directory.
subdir = po
top_builddir = ..

# These options get passed to xgettext.
XGETTEXT_OPTIONS = \
	--keyword=_ \
	--keyword=N_ \
	--keyword=Q_ \
	--keyword=NG_:1,2 \
	--from-code=UTF-8 \
	--no-location

# This is the copyright holder that gets inserted into the header of the
# $(DOMAIN).pot file.  Set this to the copyright holder of the surrounding
# package.  (Note that the msgstr strings, extracted from the package's
# sources, belong to the copyright holder of the package.)  Translators are
# expected to transfer the copyright for their translations to this person
# or entity, or to disclaim their copyright.  The empty string stands for
# the public domain; in this case the translators are expected to disclaim
# their copyright.
COPYRIGHT_HOLDER = Raphael Manfredi

# This is the email address or URL to which the translators shall report
# bugs in the untranslated strings:
# - Strings which are not entire sentences, see the maintainer guidelines
#   in the GNU gettext documentation, section 'Preparing Strings'.
# - Strings which use unclear terms or require additional context to be
#   understood.
# - Strings which make invalid assumptions about notation of date, time or
#   money.
# - Pluralisation problems.
# - Incorrect English spelling.
# - Incorrect formatting.
# It can be your email address, or a mailing list address where translators
# can write to without being subscribed, or the URL of a web page through
# which the translators can contact you.
MSGID_BUGS_ADDRESS = gtk-gnutella-devel@lists.sf.net

# This is the list of locale categories, beyond LC_MESSAGES, for which the
# message catalogs shall be used.  It is usually empty.
EXTRA_LOCALE_CATEGORIES =

.SUFFIXES:
.SUFFIXES: .po .gmo .mo .sed .sin .nop .po-update

.po.mo:
	@echo "$(MSGFMT) -c -o $@ $<"; \
	$(MSGFMT) -c -o t-$@ $< && mv t-$@ $@

.po.gmo:
	@lang=`echo $* | sed -e 's,.*/,,'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}rm -f $${lang}.gmo && $(GMSGFMT) $(GMSGFMT_FLAGS) -o $${lang}.gmo $${lang}.po"; \
	cd $(srcdir) && rm -f $${lang}.gmo && $(GMSGFMT) $(GMSGFMT_FLAGS) -o t-$${lang}.gmo $${lang}.po && mv t-$${lang}.gmo $${lang}.gmo

.sin.sed:
	sed -e '/^#/d' $< > t-$@
	mv t-$@ $@

all-yes: stamp-po
all-no:

# Must run whenever there are new strings to be translated in the source files.
update: update-potfiles update-po

# Recompute list of files with translatable strings
# Only looks for the "_(" string in source files, which may be imperfect
update-potfiles:
	( \
		echo "# List of source files containing translatable strings."; \
		echo "# Regenerated on `date`"; \
		echo ""; \
		(cd $(top_srcdir); find src -name "*.[ct]" | xargs grep -l _\( | \
			egrep -v -e gtk1/interface-glade.c -e '/gen-.*\.c' | sort); \
		echo "# The End"; \
	) >POTFILES.in

# stamp-po is a timestamp denoting the last time at which the CATALOGS have
# been loosely updated. Its purpose is that when a developer or translator
# checks out the package via CVS, and the $(DOMAIN).pot file is not in CVS,
# "make" will update the $(DOMAIN).pot and the $(CATALOGS), but subsequent
# invocations of "make" will do nothing. This timestamp would not be necessary
# if updating the $(CATALOGS) would always touch them; however, the rule for
# $(POFILES) has been designed to not touch files that don't need to be
# changed.
stamp-po: $(srcdir)/$(DOMAIN).pot
	test -z "$(CATALOGS)" || $(MAKE) $(CATALOGS)
	@echo "touch stamp-po"
	@echo timestamp > stamp-poT
	@mv stamp-poT stamp-po

# Note: Target 'all' must not depend on target '$(DOMAIN).pot-update',
# otherwise packages like GCC can not be built if only parts of the source
# have been downloaded.

# This target rebuilds $(DOMAIN).pot; it is an expensive operation.
# Note that $(DOMAIN).pot is not touched if it doesn't need to be changed.
$(DOMAIN).pot-update: $(POTFILES) $(srcdir)/POTFILES.in remove-potcdate.sed
	$(XGETTEXT) --default-domain=$(DOMAIN) --directory=$(top_srcdir) \
	  --add-comments=TRANSLATORS: $(XGETTEXT_OPTIONS) \
	  --files-from=$(srcdir)/POTFILES.in \
	  --copyright-holder='$(COPYRIGHT_HOLDER)' \
	  --msgid-bugs-address='$(MSGID_BUGS_ADDRESS)' \
	  --package-name='$(PACKAGE)' \
	  --package-version='$(VERSION)'
	test ! -f $(DOMAIN).po || { \
	  if test -f $(srcdir)/$(DOMAIN).pot; then \
	    sed -f remove-potcdate.sed < $(srcdir)/$(DOMAIN).pot > $(DOMAIN).1po && \
	    sed -f remove-potcdate.sed < $(DOMAIN).po > $(DOMAIN).2po && \
	    if cmp $(DOMAIN).1po $(DOMAIN).2po >/dev/null 2>&1; then \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(DOMAIN).po; \
	    else \
	      rm -f $(DOMAIN).1po $(DOMAIN).2po $(srcdir)/$(DOMAIN).pot && \
	      mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	    fi; \
	  else \
	    mv $(DOMAIN).po $(srcdir)/$(DOMAIN).pot; \
	  fi; \
	}

# This rule has no dependencies: we don't need to update $(DOMAIN).pot at
# every "make" invocation, only create it when it is missing.
# Only "make $(DOMAIN).pot-update" or "make dist" will force an update.
$(srcdir)/$(DOMAIN).pot:
	$(MAKE) $(DOMAIN).pot-update

# This target rebuilds a PO file if $(DOMAIN).pot has changed.
# Note that a PO file is not touched if it doesn't need to be changed.
$(POFILES): $(srcdir)/$(DOMAIN).pot
	@lang=`echo $@ | sed -e 's,.*/,,' -e 's/\.po$$//'`; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE_UPDATE) $${lang}.po $(DOMAIN).pot"; \
	cd $(srcdir) && $(MSGMERGE_UPDATE) $${lang}.po $(DOMAIN).pot


install: install-exec install-data
install-exec:

install.man:

install-data-no: all
install-data-yes: all
	$(mkinstalldirs) $(DESTDIR)$(datadir)
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkinstalldirs) $(DESTDIR)$$dir; \
	  if test -r $$cat; then realcat=$$cat; else realcat=$(srcdir)/$$cat; fi; \
	  $(INSTALL_DATA) $$realcat $(DESTDIR)$$dir/$(DOMAIN).mo; \
	  echo "installing $$realcat as $(DESTDIR)$$dir/$(DOMAIN).mo"; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	      rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      ln -s ../LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      ln $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo 2>/dev/null || \
	      cp -p $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(DOMAIN).mo $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	      echo "installing $$realcat link as $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo"; \
	    fi; \
	  done; \
	done

install-strip: install

installdirs: installdirs-exec installdirs-data
installdirs-exec:
installdirs-data-no:
installdirs-data-yes:
	$(mkinstalldirs) $(DESTDIR)$(datadir)
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  dir=$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkinstalldirs) $(DESTDIR)$$dir; \
	  for lc in '' $(EXTRA_LOCALE_CATEGORIES); do \
	    if test -n "$$lc"; then \
	      if (cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc 2>/dev/null) | grep ' -> ' >/dev/null; then \
	        link=`cd $(DESTDIR)$(localedir)/$$lang && LC_ALL=C ls -l -d $$lc | sed -e 's/^.* -> //'`; \
	        mv $(DESTDIR)$(localedir)/$$lang/$$lc $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	        mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        (cd $(DESTDIR)$(localedir)/$$lang/$$lc.old && \
	         for file in *; do \
	           if test -f $$file; then \
	             ln -s ../$$link/$$file $(DESTDIR)$(localedir)/$$lang/$$lc/$$file; \
	           fi; \
	         done); \
	        rm -f $(DESTDIR)$(localedir)/$$lang/$$lc.old; \
	      else \
	        if test -d $(DESTDIR)$(localedir)/$$lang/$$lc; then \
	          :; \
	        else \
	          rm -f $(DESTDIR)$(localedir)/$$lang/$$lc; \
	          mkdir $(DESTDIR)$(localedir)/$$lang/$$lc; \
	        fi; \
	      fi; \
	    fi; \
	  done; \
	done

# Define this as empty until I found a useful application.
installcheck:

deinstall:: uninstall
uninstall: uninstall-exec uninstall-data
uninstall-exec:
uninstall-data-no:
uninstall-data-yes:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed -e 's/\.gmo$$//'`; \
	  for lc in LC_MESSAGES $(EXTRA_LOCALE_CATEGORIES); do \
	    rm -f $(DESTDIR)$(localedir)/$$lang/$$lc/$(DOMAIN).mo; \
	  done; \
	done

check: all

info dvi ps pdf html tags TAGS ctags CTAGS ID:

mostlyclean:
	rm -f remove-potcdate.sed
	rm -f stamp-poT
	rm -f core core.* $(DOMAIN).po $(DOMAIN).1po $(DOMAIN).2po *.new.po

clean: mostlyclean
	rm -f stamp-po
	rm -f *.gmo

# Don't remove $(DOMAIN).pot since we distribute it...
realclean: clean
	rm -f *~
	@echo "$(DOMAIN).pot NOT removed"

clobber: realclean
	rm -f Makefile POTFILES *.mo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f stamp-po $(GMOFILES)

update-po: Makefile
	$(MAKE) $(DOMAIN).pot-update
	test -z "$(UPDATEPOFILES)" || $(MAKE) $(UPDATEPOFILES)
	$(MAKE) update-gmo

# General rule for updating PO files.

.nop.po-update:
	@lang=`echo $@ | sed -e 's/\.po-update$$//'`; \
	if test "$(PACKAGE)" = "gettext-tools"; then PATH=`pwd`/../src:$$PATH; fi; \
	tmpdir=`pwd`; \
	echo "$$lang:"; \
	test "$(srcdir)" = . && cdcmd="" || cdcmd="cd $(srcdir) && "; \
	echo "$${cdcmd}$(MSGMERGE) $$lang.po $(DOMAIN).pot -o $$lang.new.po"; \
	cd $(srcdir); \
	if $(MSGMERGE) $$lang.po $(DOMAIN).pot -o $$tmpdir/$$lang.new.po; then \
	  if cmp $$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	    rm -f $$tmpdir/$$lang.new.po; \
	  else \
	    if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	      :; \
	    else \
	      echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	      exit 1; \
	    fi; \
	  fi; \
	else \
	  echo "msgmerge for $$lang.po failed!" 1>&2; \
	  rm -f $$tmpdir/$$lang.new.po; \
	fi

$(DUMMYPOFILES):

update-gmo: Makefile $(GMOFILES)
	@:

Makefile: Makefile.SH LINGUAS POTFILES.in
	sh Makefile.SH

force:

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
