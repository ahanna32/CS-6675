########################################################################
# Makefile generated from Makefile.SH on Fri Apr 14 11:55:48 AM EDT 2023

SHELL = /bin/sh
JMAKE = jmake
TOP = ../../../..
CURRENT = src/ui/gtk/gtk1
DIR = src/ui/gtk/gtk1/

########################################################################
# Parameters set by Configure -- edit config.sh if changes are needed

AR = ar rc
CC = cc
CP = /usr/bin/cp
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
OBJECTS =   $(OBJ)
GTK_CFLAGS =  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/x86_64-linux-gnu -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/fribidi -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTK_LDFLAGS =   -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lharfbuzz -lgobject-2.0 -pthread -lglib-2.0
SOURCES =   $(SRC)
GLADE =  glade-2

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

# $X-Id$

# Those files lie in the ../gtk-shared directory
REMOTE_GLADE_C = callbacks.c
REMOTE_GLADE_H = callbacks.h
REMOTE_GLADE = $(REMOTE_GLADE_C) $(REMOTE_GLADE_H)

LSRC = \
	fileinfo.c \
	gnet_stats.c \
	hcache.c \
	interface-glade.c \
	monitor_cb.c \
	monitor.c \
	nodes_cb.c \
	nodes.c \
	search_cb.c \
	search.c \
	search_stats.c \
	support-glade.c \
	upload_stats.c \
	uploads.c

LOBJ = \
	fileinfo.o \
	gnet_stats.o \
	hcache.o \
	interface-glade.o \
	monitor_cb.o \
	monitor.o \
	nodes_cb.o \
	nodes.o \
	search_cb.o \
	search.o \
	search_stats.o \
	support-glade.o \
	upload_stats.o \
	uploads.o \
	callbacks.o 

GLADE_C = \
	interface-glade.c \
	support-glade.c

GLADE_H = \
	interface-glade.h \
	support-glade.h 

GLADE_O = \
	interface-glade.o \
	support-glade.o \
	callbacks.o 

GLADE_GEN = $(GLADE_C) $(GLADE_H)

SRC = $(LSRC) $(GLADE_C) $(REMOTE_GLADE_C)
OBJ = $(LOBJ) $(GLADE_O)

TOP_SRC = ../../..
TOP_GUI = ../..

# Those extra flags are expected to be user-defined
CFLAGS = -I$(TOP) -I$(TOP_SRC) -I$(TOP_GUI) \
	$(GTK_CFLAGS) -DGUI_SOURCES -DCURDIR=$(CURRENT)
DPFLAGS = $(CFLAGS)

GLADEFILE = gtk-gnutella.glade

# We allow the target to fail since we're distribute the generated files
# with the sources, so even if they don't have glade, it will work.

# Unfortunately there are problems with generating the sources from
# the glade file. If the user does not have the right setup then the
# compilation will fail, and most users won't be able to correct this
# by using the distributed sources instead. Thus: commented out until
# better times.
#$(GLADE_GEN): $(GLADEFILE) $(REMOTE_GLADE)
#	-$(GLADE) --write-source $(GLADEFILE)
#	touch $(GLADE_GEN)

GTK_SHARED = ../gtk-shared

callbacks.c: $(GTK_SHARED)/callbacks.c
	$(RM) callbacks.c
	$(CP) $(GTK_SHARED)/callbacks.c .

callbacks.h: $(GTK_SHARED)/callbacks.h
	$(RM) callbacks.h
	$(CP) $(GTK_SHARED)/callbacks.h .


interface-glade.o: interface-glade.c
	$(CC) -c $(JCFLAGS) -O0 -w $<

depend:: $(REMOTE_GLADE)

local_realclean::
	$(RM) $(REMOTE_GLADE)


local_depend:: ../../../../mkdep

../../../../mkdep:
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

fileinfo.o: fileinfo.c ../../gtk/gui.h ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/columns.h ../../gtk/downloads_common.h ../../../if/ui/gtk/downloads.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/log.h ../../gtk/drag.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../../if/gui_property.h ../../../lib/utf8.h ../../../lib/override.h ../../../lib/malloc.h
gnet_stats.o: gnet_stats.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/gnet_stats.h ../../gtk/gnet_stats_common.h ../../gtk/columns.h ../../../if/core/hsep.h ../../../lib/event.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/ui/gtk/gnet_stats.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../../if/core/gnutella.h ../../../lib/endian.h ../../../if/gui_property_priv.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/str.h ../../../lib/stringify.h ../../../lib/override.h ../../../lib/malloc.h
hcache.o: hcache.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/columns.h ../../gtk/hcache.h ../../gtk/hcache_common.h ../../../if/core/hcache.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../../if/gui_property.h ../../../lib/log.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/str.h ../../../lib/stringify.h ../../../lib/override.h ../../../lib/malloc.h
interface-glade.o: interface-glade.c callbacks.h ../../gtk/gui.h ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/downloads.h ../../gtk/downloads_common.h ../../../if/ui/gtk/downloads.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/log.h ../../gtk/fileinfo.h ../../gtk/filter_cb.h ../../gtk/gnet_stats.h ../../gtk/gnet_stats_common.h ../../gtk/columns.h ../../../if/ui/gtk/gnet_stats.h ../../gtk/hcache.h ../../gtk/hcache_common.h ../../gtk/main_cb.h ../../gtk/monitor_cb.h ../../gtk/settings_cb.h ../../gtk/upload_stats_cb.h ../../gtk/uploads_cb.h ../../gtk/visual_progress.h ../../gtk/gtk2/nodes_cb.h interface-glade.h support-glade.h
monitor_cb.o: monitor_cb.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/monitor_cb.h ../../gtk/search.h ../../../if/ui/gtk/search.h ../../../lib/override.h ../../../lib/malloc.h
monitor.o: monitor.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/monitor.h ../../../if/core/share.h ../../../lib/host_addr.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/log.h ../../../lib/str.h ../../../lib/override.h ../../../lib/malloc.h
nodes_cb.o: nodes_cb.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h nodes_cb.h ../../gtk/gtkcolumnchooser.h ../../gtk/nodes_common.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../lib/misc.h ../../../if/core/mq.h ../../../lib/host_addr.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/vendors.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../gtk/search.h ../../../if/ui/gtk/search.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../if/core/sockets.h ../../../lib/override.h ../../../lib/malloc.h
nodes.o: nodes.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/nodes_common.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../lib/misc.h ../../../if/core/mq.h ../../../lib/host_addr.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/vendors.h ../../gtk/nodes.h ../../gtk/notebooks.h ../../gtk/columns.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/gui_property.h ../../../lib/log.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/hset.h ../../../lib/nid.h ../../../lib/str.h ../../../lib/stringify.h ../../../lib/utf8.h ../../../lib/override.h ../../../lib/malloc.h
search_cb.o: search_cb.c ../../gtk/gui.h ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h search_cb.h ../../gtk/columns.h ../../gtk/filter_core.h ../../../if/core/filter.h ../../../lib/host_addr.h ../../../lib/misc.h ../../../lib/pattern.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/search_common.h ../../gtk/search.h ../../../if/ui/gtk/search.h ../../gtk/search_result.h ../../../if/core/guess.h ../../../if/core/search.h ../../../lib/hashlist.h ../../../lib/pslist.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../if/core/search.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../gtk/statusbar.h ../../../if/ui/gtk/statusbar.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/gnet_property.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/core/sockets.h ../../../lib/atoms.h ../../../lib/gnet_host.h ../../../lib/glib-missing.h ../../../lib/halloc.h ../../../lib/utf8.h ../../../lib/override.h ../../../lib/malloc.h
search.o: search.c ../../gtk/gui.h ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h search_cb.h ../../gtk/columns.h ../../gtk/drag.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/notebooks.h ../../gtk/search_common.h ../../gtk/search.h ../../../if/ui/gtk/search.h ../../gtk/search_result.h ../../../if/core/guess.h ../../../if/core/search.h ../../../lib/hashlist.h ../../../lib/misc.h ../../../lib/pslist.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../lib/host_addr.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../if/core/search.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../gtk/statusbar.h ../../../if/ui/gtk/statusbar.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../if/core/sockets.h ../../../lib/ascii.h ../../../casts.h ../../../lib/atoms.h ../../../lib/gnet_host.h ../../../lib/base32.h ../../../lib/glib-missing.h ../../../lib/halloc.h ../../../lib/hashing.h ../../../lib/xmalloc.h ../../../lib/hset.h ../../../lib/mime_type.h ../../../lib/mime_types.h ../../../lib/stringify.h ../../../lib/timestamp.h ../../../lib/url.h ../../../lib/urn.h ../../../lib/utf8.h ../../../lib/walloc.h ../../../lib/eslist.h ../../../lib/override.h ../../../lib/malloc.h
search_stats.o: search_stats.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/columns.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/search_stats.h ../../../if/core/share.h ../../../lib/host_addr.h ../../../if/gui_property.h ../../../lib/log.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/str.h ../../../lib/wordvec.h ../../../lib/override.h ../../../lib/malloc.h
support-glade.o: support-glade.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../../lib/omalloc.h support-glade.h
upload_stats.o: upload_stats.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../../if/ui/gtk/upload_stats.h ../../gtk/columns.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../gtk/upload_stats.h ../../../if/core/uploads.h ../../../lib/host_addr.h ../../gtk/upload_stats_cb.h ../../../lib/str.h ../../../lib/stringify.h ../../../lib/timestamp.h ../../../lib/utf8.h ../../../lib/override.h ../../../lib/malloc.h
uploads.o: uploads.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/columns.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/settings.h ../../../if/gui_property.h ../../../lib/log.h ../../gtk/uploads.h ../../../if/core/uploads.h ../../../lib/host_addr.h ../../gtk/uploads_common.h ../../gtk/uploads.h ../../../if/ui/gtk/uploads.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/gnet_property.h ../../../lib/str.h ../../../lib/utf8.h ../../../lib/walloc.h ../../../lib/eslist.h ../../../lib/override.h ../../../lib/malloc.h
interface-glade.o: interface-glade.c callbacks.h ../../gtk/gui.h ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/downloads.h ../../gtk/downloads_common.h ../../../if/ui/gtk/downloads.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/log.h ../../gtk/fileinfo.h ../../gtk/filter_cb.h ../../gtk/gnet_stats.h ../../gtk/gnet_stats_common.h ../../gtk/columns.h ../../../if/ui/gtk/gnet_stats.h ../../gtk/hcache.h ../../gtk/hcache_common.h ../../gtk/main_cb.h ../../gtk/monitor_cb.h ../../gtk/settings_cb.h ../../gtk/upload_stats_cb.h ../../gtk/uploads_cb.h ../../gtk/visual_progress.h ../../gtk/gtk2/nodes_cb.h interface-glade.h support-glade.h
support-glade.o: support-glade.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../../lib/omalloc.h support-glade.h
callbacks.o: callbacks.c ../../../common.h ../../../../config.h ../../../types.h ../../../gcc.h ../../../lib/mingw32.h ../../../casts.h ../../../lib/compat_setjmp.h ../../../lib/fast_assert.h ../../../lib/exit.h ../../../lib/glog.h ../../../lib/stacktrace.h ../../../lib/log.h ../../../lib/pattern.h ../../gtk/gui.h ../../gtk/gtk-missing.h ../../gtk/gui.h ../../../lib/prop.h ../../../lib/event.h ../../../lib/pslist.h ../../../lib/mutex.h ../../../lib/spinlock.h ../../../lib/atomic.h ../../../lib/thread.h ../../../lib/tsig.h ../../../lib/compat_gettid.h ../../../lib/tm.h ../../../lib/timestamp.h ../../../lib/misc.h ../../../lib/fs_free_space.h ../../../lib/sha1.h ../../../lib/vmm.h ../../../lib/host_addr.h ../../../lib/endian.h ../../../lib/glib-missing.h ../../../lib/htable.h ../../../lib/hash.h ../../gtk/gtk2/interface-glade.h ../../gtk/gtk2/support-glade.h ../../gtk/main.h ../../gtk/misc.h ../../gtk/clipboard.h ../../../if/ui/gtk/misc.h ../../gtk/search.h ../../../if/ui/gtk/search.h ../../gtk/search_stats.h ../../gtk/statusbar.h ../../../if/ui/gtk/statusbar.h ../../../if/bridge/ui2c.h ../../../lib/adns.h ../../../lib/pslist.h ../../../if/core/downloads.h ../../../lib/event.h ../../../lib/hashlist.h ../../../lib/htable.h ../../../lib/http_range.h ../../../lib/iso3166.h ../../../lib/list.h ../../../lib/pmsg.h ../../../lib/slist.h ../../../lib/slist.h ../../../lib/tm.h ../../../core/pproxy.h ../../../if/core/pproxy.h ../../../if/core/http.h ../../../lib/host_addr.h ../../../lib/cq.h ../../../lib/array.h ../../../lib/gnet_host.h ../../../lib/hashlist.h ../../../lib/vector.h ../../../lib/unsigned.h ../../../lib/sequence.h ../../../lib/list.h ../../../lib/plist.h ../../../core/rx.h ../../../core/rx_link.h ../../../core/rx.h ../../../if/core/bsched.h ../../../if/core/wrap.h ../../../if/core/sockets.h ../../../lib/inputevt.h ../../../core/rx_chunk.h ../../../if/core/search.h ../../../lib/misc.h ../../../lib/vendors.h ../../../if/core/nodes.h ../../../if/core/guid.h ../../../if/core/mq.h ../../../if/core/fileinfo.h ../../../lib/eslist.h ../../../lib/path.h ../../../if/core/guess.h ../../../if/core/search.h ../../../if/core/hcache.h ../../../if/core/hsep.h ../../../if/core/net_stats.h ../../../if/gen/gnr_stats.h ../../../if/gen/msg.h ../../../if/gen/msg_drop.h ../../../if/core/share.h ../../../if/core/uploads.h ../../../if/gnet_property.h ../../../lib/log.h ../../../if/gui_property.h ../../../if/gui_property_priv.h ../../../if/ui/gtk/gnet_stats.h ../../../ui/gtk/columns.h ../../../ui/gtk/notebooks.h ../../../lib/override.h 
