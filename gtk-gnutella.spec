Name: gtk-gnutella
Summary: A GUI-based Gnutella Client
Version: 1.2.2

%define gtk2 1

%if %{gtk2}
%define gtkver 2
%else
%define gtkver 1
%endif

# Edit this: fedora and mdk are exclusive (1 == true)
%define fedora 1
%define mdk    0

URL: http://sourceforge.net/projects/gtk-gnutella/
Source: %{name}-%{version}.tar.bz2
License: GPL
BuildRoot: %{_tmppath}/%{name}-root
%if %{fedora}
Group: Applications/Internet
Release: 1.gtk%{gtkver}
%if %{gtk2}
BuildRequires: gtk2-devel glib2-devel libxml2-devel byacc
%else
BuildRequires: gtk+-devel glib-devel libxml2-devel byacc
%endif
%endif
%if %{mdk}
Group: Networking/File transfer
Release: 0.gtk%{gtkver}.1mdk
%if %{gtk2}
BuildRequires: gtk2-devel glib2-devel libxml2-devel bison
%else
BuildRequires: gtk+-devel glib-devel libxml2-devel bison
%endif
%endif

%description
gtk-gnutella is a GUI based Gnutella p2p servent. It's a fully featured  
servent designed to share any type of file.  gtk-gnutella implements 
compressed gnutella net connections, ultrapeer and leaf nodes and uses 
Passive/Active Remote Queueing (PARQ) and other modern gnutella network
features.

%prep
%setup -q

%build
./build.sh \
	--gtk%{gtkver} \
	--prefix=%{_prefix} \
	--bindir=%{_bindir} \
	--datadir=%{_datadir}/%{name} \
	--mandir=%{_mandir}/man1} \
	--cc=%{__cc} \
	--cflags="%{optflags}" \
	--configure-only

%install
%{__rm} -rf $RPM_BUILD_ROOT
%{__install} -d -m 755 $RPM_BUILD_ROOT/%{_bindir}
%{__make} install INSTALL_PREFIX=$RPM_BUILD_ROOT
%{__install} -d -m 755 $RPM_BUILD_ROOT/%{_mandir}/man1
%{__make} install.man INSTALL_PREFIX=$RPM_BUILD_ROOT

# desktop entry file
%{__install} -D -m 644 extra_files/gtk-gnutella.desktop \
	$RPM_BUILD_ROOT/%{_datadir}/applications/gtk-gnutella.desktop

# icons
%{__install} -D -d -m 755 $RPM_BUILD_ROOT/%{_datadir}/pixmaps
%{__install} -D -m 644 extra_files/gtk-gnutella.png \
	$RPM_BUILD_ROOT/%{_datadir}/pixmaps/gtk-gnutella.png

# freedesktop.org icon theme specification locations.
%{__install} -D -m 644 extra_files/gtk-gnutella.16.png \
	$RPM_BUILD_ROOT/%{_datadir}/icons/hicolor/16x16/apps/gtk-gnutella.png
%{__install} -D -m 644 extra_files/gtk-gnutella.32.png \
	$RPM_BUILD_ROOT/%{_datadir}/icons/hicolor/32x32/apps/gtk-gnutella.png
%{__install} -D -m 644 extra_files/gtk-gnutella.png \
	$RPM_BUILD_ROOT/%{_datadir}/icons/hicolor/48x48/apps/gtk-gnutella.png
%{__install} -D -m 644 extra_files/gtk-gnutella.svg \
	$RPM_BUILD_ROOT/%{_datadir}/icons/hicolor/scalable/apps/gtk-gnutella.svg

%if %{mdk}
%{__install} -D -m 644 extra_files/gtk-gnutella.16.png \
	$RPM_BUILD_ROOT/%{_miconsdir}/gtk-gnutella.png
%{__install} -D -m 644 extra_files/gtk-gnutella.32.png \
	$RPM_BUILD_ROOT/%{_iconsdir}/gtk-gnutella.png
%{__install} -D -m 644 extra_files/gtk-gnutella.png \
	$RPM_BUILD_ROOT/%{_liconsdir}/gtk-gnutella.png
%endif

# menu entry
%if %{mdk}
%{__install} -d -m 755 $RPM_BUILD_ROOT/%{_menudir}
%{__cat} << EOF > $RPM_BUILD_ROOT/%{_menudir}/gtk-gnutella
?package(gtk-gnutella):\
	needs="X11"\
	section="Networking/File transfer"\
	title="gtk-gnutella"\
	longtitle="GTK Gnutella Servent"\
	command="/usr/bin/gtk-gnutella"\
	icon="gtk-gnutella.png"\
	startup_notify="false"
EOF
%{__chmod} 644 $RPM_BUILD_ROOT/%{_menudir}/gtk-gnutella
%endif

%clean
%{__rm} -rf $RPM_BUILD_ROOT

%if %{mdk}
%post
%{update_menus}

%postun
%{clean_menus}
%endif

%files
%defattr(-,root,root,0755)
%{_bindir}/*
%{_datadir}/applications/gtk-gnutella.desktop
%{_datadir}/gtk-gnutella
%{_datadir}/icons/hicolor/*/apps/gtk-gnutella.*
%{_datadir}/locale
%{_datadir}/pixmaps/gtk-gnutella.png
%{_datadir}/pixmaps/gtk-gnutella.svg
%{_mandir}/man1

%if %{mdk}
%{_menudir}/gtk-gnutella
%{_miconsdir}/gtk-gnutella.png
%{_iconsdir}/gtk-gnutella.png
%{_liconsdir}/gtk-gnutella.png
%endif

%doc README TODO AUTHORS ChangeLog LICENSE doc/other/remote-shell.txt

%changelog
* Fri Oct 07 2005 Gary Lawrence Murphy <garym@maya.dyndns.org>
- Appended gtk-gnutella.svg file.
* Fri Aug 14 2004 Murphy <eqom14@users.sourceforge.net>
- Try and make a universal spec for fedora or mdk.
* Tue Dec 11 2001 Sam Varshavchik <mrsam@courier-mta.com>
- Initial build.

