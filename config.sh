#!/bin/sh
#
# This file was produced by running the Configure script. It holds all the
# definitions figured out by Configure. Should you modify one of these values,
# do not forget to propagate your changes by running "Configure -der". You may
# instead choose to run each of the .SH files by yourself, or "Configure -S".
#

# Package name      : gtk-gnutella
# Source directory  : .
# Configuration time: Fri Apr 14 11:55:24 EDT 2023
# Configured by     : ricardo
# Target system     : linux ricardo-p2p 5.19.0-38-generic #39~22.04.1-ubuntu smp preempt_dynamic fri mar 17 21:16:15 utc 2 x86_64 x86_64 x86_64 gnulinux 

: Configure command line arguments.
config_arg0='./Configure'
config_args='-Oder -s -U usenm -D usemymalloc=y -D prefix=/usr/local -D make=gmake -D yacc=bison -D bindir=/usr/local/bin -D privlib=/usr/local/share/gtk-gnutella -D archlib=/usr/local/lib/gtk-gnutella -D locale=/usr/local/share/locale -D sysman=/usr/local/man -D official=true -D gtkversion=2'
config_argc=26
config_arg1='-Oder'
config_arg2='-s'
config_arg3='-U'
config_arg4='usenm'
config_arg5='-D'
config_arg6='usemymalloc=y'
config_arg7='-D'
config_arg8='prefix=/usr/local'
config_arg9='-D'
config_arg10='make=gmake'
config_arg11='-D'
config_arg12='yacc=bison'
config_arg13='-D'
config_arg14='bindir=/usr/local/bin'
config_arg15='-D'
config_arg16='privlib=/usr/local/share/gtk-gnutella'
config_arg17='-D'
config_arg18='archlib=/usr/local/lib/gtk-gnutella'
config_arg19='-D'
config_arg20='locale=/usr/local/share/locale'
config_arg21='-D'
config_arg22='sysman=/usr/local/man'
config_arg23='-D'
config_arg24='official=true'
config_arg25='-D'
config_arg26='gtkversion=2'

Author=''
Date=''
Header=''
Id='$Id'
Locker=''
Log=''
RCSfile=''
Revision=''
Source=''
State=''
_a='.a'
_exe=''
_o='.o'
afs='false'
afsroot='/afs'
alignbytes='8'
aphostname=''
ar='/usr/bin/ar'
archlib='/usr/local/lib/gtk-gnutella'
archlibexp='/usr/local/lib/gtk-gnutella'
archname='x86_64-linux'
archobjs=''
awk='/usr/bin/awk'
bash=''
bin='/usr/local/bin'
binexp='/usr/local/bin'
bison='bison'
byacc='byacc'
byteorder='1234'
c=''
cat='/usr/bin/cat'
cc='cc'
ccflags='-pipe -momit-leaf-frame-pointer -W -Wall -Wformat=2 -Wshadow'
ccname='gcc'
ccversion=''
cf_by='ricardo'
cf_time='Fri Apr 14 11:55:24 EDT 2023'
charsize='1'
chgrp='/usr/bin/chgrp'
chmod='/usr/bin/chmod'
chown='/usr/bin/chown'
clocktype='clock_t'
comm=''
compress=''
contains='grep'
cp='/usr/bin/cp'
cpio=''
cpp='/usr/bin/cpp'
cpp_quote=''
cpp_stuff='42'
cppfilter=''
cppflags='-W -Wall -Wformat=2 -Wshadow'
cpplast='-'
cppminus='-'
cpprun='cc -E'
cppstdin='cc -E'
csh=''
d_access='define'
d_alarm='define'
d_arc4random='undef'
d_archlib='define'
d_attribut='define'
d_backtrace='define'
d_bcmp='define'
d_bcopy='define'
d_bfd_lib='undef'
d_bfd_section='undef'
d_bindtxtcode='define'
d_bsd='undef'
d_bsearch='define'
d_built_bswap32='define'
d_built_bswap64='define'
d_built_clz='define'
d_built_ctz='define'
d_built_popcount='define'
d_bzero='define'
d_can64='define'
d_clearenv='define'
d_clock_getres='define'
d_clock_gettime='define'
d_closefrom='define'
d_const='define'
d_dbus='undef'
d_deflate='define'
d_dev_poll='undef'
d_difftime='define'
d_dirent_d_namlen='undef'
d_dirent_d_type='define'
d_dirfd='define'
d_dirnamlen=''
d_dladdr='define'
d_dos='undef'
d_enablenls='define'
d_end_symbol='define'
d_eofnblk='define'
d_epoll='define'
d_etext_symbol='define'
d_eunice='undef'
d_fchdir='define'
d_fdatasync='define'
d_fdopendir='define'
d_fork='define'
d_fstatat='define'
d_fsync='define'
d_ftime='define'
d_getaddrinfo='define'
d_geteuid='define'
d_gethname='undef'
d_getifaddrs='define'
d_getinvent='undef'
d_getlogin='define'
d_getnameinfo='define'
d_getppid='define'
d_getprogname='undef'
d_getpwnam='define'
d_getpwuid='define'
d_getrlimit='define'
d_gettblsz='undef'
d_gettext='define'
d_gettimeod='define'
d_getuid='define'
d_glib='define'
d_gnulibc='define'
d_gnutls='undef'
d_gtk='define'
d_headless='undef'
d_herror='define'
d_hstrerror='define'
d_iconv='define'
d_ieee754='define'
d_ilp32='undef'
d_ilp64='undef'
d_index='define'
d_inflate='define'
d_iptos='define'
d_ipv6='define'
d_isascii='define'
d_kevent_int_udata='undef'
d_kqueue='undef'
d_linux='define'
d_locale_charset='undef'
d_lp64='define'
d_lstat='define'
d_madvise='define'
d_memalign='define'
d_memcpy='define'
d_memmove='define'
d_mempcpy='define'
d_memrchr='define'
d_memset='define'
d_mmap='define'
d_msghdr_msg_flags='define'
d_mymalloc='define'
d_nanosleep='define'
d_nls='define'
d_official='define'
d_oldsock='undef'
d_open3='define'
d_openat='define'
d_os2='undef'
d_pause='define'
d_phostname='undef'
d_pipe2='define'
d_poll='define'
d_popen='define'
d_portable='undef'
d_posix_fadvise='define'
d_posix_memalign='define'
d_pread='define'
d_preadv='define'
d_proginvocname='define'
d_ptattr_setstack='define'
d_pwage='undef'
d_pwchange='undef'
d_pwclass='undef'
d_pwcomment='undef'
d_pwexpire='undef'
d_pwquota='undef'
d_pwrite='define'
d_pwritev='define'
d_recvmsg='define'
d_regcomp='define'
d_regparm='define'
d_remotectrl='undef'
d_rusage='define'
d_sbrk='define'
d_sched_yield='define'
d_select='define'
d_semctl='define'
d_semget='define'
d_semop='define'
d_semtimedop='define'
d_sendfile='define'
d_setenv='define'
d_setproctitle='undef'
d_setprogname='undef'
d_setsid='define'
d_sigaction='define'
d_sigaltstack='define'
d_sigprocmask='define'
d_sigsetjmp='define'
d_sockaddr_in_sin_len='undef'
d_sockaddr_un='define'
d_socker_get='undef'
d_socket='define'
d_sockpair='define'
d_statfs='define'
d_statvfs='define'
d_strchr='define'
d_strlcat='undef'
d_strlcpy='undef'
d_sync_atomic='define'
d_syscall='define'
d_sysctl='undef'
d_system='define'
d_times='define'
d_ttyname='define'
d_uctx_mctx='define'
d_uctx_mctx_gregs='define'
d_uname='define'
d_useglib1='undef'
d_useglib2='define'
d_usegtk1='undef'
d_usegtk2='define'
d_usleep='define'
d_vfork='define'
d_voidsig='define'
d_volatile='define'
d_vsnprintf='define'
d_waitpid='define'
d_windows='undef'
d_xenix='undef'
date='/usr/bin/date'
dbuscflags=''
dbusconfig='false'
dbusldflags=''
defvoidused='15'
direntrytype=''
eagain='EAGAIN'
ebcdic='undef'
echo='/usr/bin/echo'
egrep='/usr/bin/egrep'
emacs=''
enablenls='true'
eunicefix=':'
expr='/usr/bin/expr'
fieldn='3'
find=''
firstmakefile=''
flex=''
freetype=''
from=':'
gcc=''
gccosandvers=''
gccversion='11'
glade='glade-2'
glibcflags='-pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include'
glibconfig='pkg-config glib-2.0 gobject-2.0 gthread-2.0'
glibldflags=' -lgobject-2.0 -pthread -lglib-2.0'
glibpackage='glib-2.0 gobject-2.0 gthread-2.0'
glibpth='/lib /usr/lib /usr/lib/386 /lib/386 /usr/ccs/lib /usr/ucblib /usr/local/lib /lib32 /lib64 /usr/lib/x86_64-linux-gnu'
glibversion='2'
gmake=''
gmsgfmt='/usr/bin/msgfmt'
gnulibc_version='2.35'
gnutlscflags=''
gnutlsconfig='false'
gnutlsldflags=''
grep='/usr/bin/grep'
groupcat='cat /etc/group'
gtkcflags='-pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/x86_64-linux-gnu -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/fribidi -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include'
gtkconfig='pkg-config gtk+-2.0'
gtkgversion='1.2.2'
gtkldflags=' -lgtk-x11-2.0 -lgdk-x11-2.0 -latk-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lharfbuzz -lgobject-2.0 -pthread -lglib-2.0'
gtkpackage='gtk+-2.0'
gtkversion='2'
gzip=''
h_fcntl='false'
h_sysfile='true'
hint='default'
hostcat='cat /etc/hosts'
huge=''
i_alloca='define'
i_arpainet='define'
i_dirent='define'
i_dlfcn='define'
i_execinfo='define'
i_fcntl='undef'
i_iconv='define'
i_ifaddrs='define'
i_inttypes='define'
i_invent='undef'
i_langinfo='define'
i_libcharset='undef'
i_libintl='define'
i_limits='define'
i_linux_netlink='define'
i_linux_rtnetlink='define'
i_malloc='define'
i_math='define'
i_mswsock='undef'
i_netdb='define'
i_netif='define'
i_netroute='define'
i_niin='define'
i_niip='define'
i_poll='define'
i_pthread='define'
i_pwd='define'
i_regex='define'
i_sched='define'
i_stdarg='define'
i_stdlib='define'
i_string='define'
i_sys_ucontext='undef'
i_sysfile='define'
i_sysin='undef'
i_sysipc='define'
i_sysmman='define'
i_sysmount='define'
i_sysparam='define'
i_syspoll='define'
i_sysresrc='define'
i_sysselct='define'
i_syssem='define'
i_syssendfile='define'
i_syssock='define'
i_sysstat='define'
i_sysstatvfs='define'
i_syssysctl='undef'
i_systime='define'
i_systimeb='define'
i_systimek='undef'
i_systimes='define'
i_systypes='define'
i_sysun='define'
i_sysutsname='define'
i_sysvfs='define'
i_syswait='define'
i_time='define'
i_ucontext='define'
i_unistd='define'
i_varargs='undef'
i_varhdr='stdarg.h'
i_winsock2='undef'
i_ws2tcpip='undef'
i_zlib='define'
ieee754_byteorder='1234'
ilp='64'
incpath=''
inews=''
install='/usr/bin/install'
installarchlib='/usr/local/lib/gtk-gnutella'
installbin='/usr/local/bin'
installdir='mkdir -p'
installmansrc='/usr/share/man/man1'
installprivlib='/usr/local/share/gtk-gnutella'
intsize='4'
issymlink='/usr/bin/test -h'
ksh=''
large=''
ldflags=''
less=''
libc=''
libnames=''
libpth='/lib /usr/lib /usr/local/lib /lib32 /lib64 /usr/lib/x86_64-linux-gnu'
libs='-lz -lm -ldl'
libscheck=''
libsdirs=' /usr/lib/x86_64-linux-gnu'
libsfiles=' libz.so.1 libm.so.6 libdl.so.2'
libsfound=' /usr/lib/x86_64-linux-gnu/libz.so.1 /usr/lib/x86_64-linux-gnu/libm.so.6 /usr/lib/x86_64-linux-gnu/libdl.so.2'
libspath=' /lib /usr/lib /usr/local/lib /lib32 /lib64 /usr/lib/x86_64-linux-gnu'
libswanted='bfd iberty sendfile z iconv m intl dl'
line=''
lint=''
lkflags=''
ln='/usr/bin/ln'
lns='/usr/bin/ln -s'
locale='/usr/local/share/locale'
localeexp='/usr/local/share/locale'
locincpth=''
loclibpth=''
longsize='8'
lp=''
lpr=''
ls=''
mail=''
mailx=''
make='/usr/bin/gmake'
make_set_make='#'
mallocobj='malloc.o'
mallocsrc='malloc.c'
malloctype=''
manext='1'
mansrc='/usr/share/man/man1'
mansrcexp='/usr/share/man/man1'
medium=''
mips_type=''
mkdep='/home/ricardo/Downloads/gtk-gnutella-1.2.2/mkdep'
mkdir='/usr/bin/mkdir'
models='none'
more=''
msgfmt='/usr/bin/msgfmt'
msgmerge='/usr/bin/msgmerge'
msgmerge_update='/usr/bin/msgmerge --update'
mv='/usr/bin/mv'
myarchname='x86_64-linux'
mydomain=''
myhostname='ricardo-p2p'
myuname='linux ricardo-p2p 5.19.0-38-generic #39~22.04.1-ubuntu smp preempt_dynamic fri mar 17 21:16:15 utc 2 x86_64 x86_64 x86_64 gnulinux '
n='-n'
nawk='/usr/bin/nawk'
nm='/usr/bin/nm'
nm_opt=''
nm_so_opt='--dynamic'
nofile=''
nroff='/usr/bin/nroff'
o_nonblock='O_NONBLOCK'
official='true'
optimize='-O2 -g'
orderlib='false'
osname='linux'
osvers='5.19.0-38-generic'
package='gtk-gnutella'
passcat='cat /etc/passwd'
perl=''
pg=''
phostname='hostname'
pkgsrc='/home/ricardo/Downloads/gtk-gnutella-1.2.2'
plibpth=''
pmake=''
pr=''
prefix='/usr/local'
prefixexp='/usr/local'
privlib='/usr/local/share/gtk-gnutella'
privlibexp='/usr/local/share/gtk-gnutella'
prototype='define'
pthread='-pthread'
ptrsize='8'
ranlib=':'
rd_nodata='-1'
remotectrl='false'
rm='/usr/bin/rm'
rm_try='/usr/bin/rm -f try try a.out .out try.[cho] try..o core core.try* try.core*'
rmail=''
run=''
runnm='false'
sed='/usr/bin/sed'
sendmail=''
sh='/bin/sh'
shar=''
sharpbang='#!'
shortsize='2'
shsharp='true'
sig_count='65'
sig_name='ZERO HUP INT QUIT ILL TRAP ABRT BUS FPE KILL USR1 SEGV USR2 PIPE ALRM TERM STKFLT CHLD CONT STOP TSTP TTIN TTOU URG XCPU XFSZ VTALRM PROF WINCH IO PWR SYS NUM32 NUM33 RTMIN NUM35 NUM36 NUM37 NUM38 NUM39 NUM40 NUM41 NUM42 NUM43 NUM44 NUM45 NUM46 NUM47 NUM48 NUM49 NUM50 NUM51 NUM52 NUM53 NUM54 NUM55 NUM56 NUM57 NUM58 NUM59 NUM60 NUM61 NUM62 NUM63 RTMAX IOT CLD POLL '
sig_name_init='"ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", "STKFLT", "CHLD", "CONT", "STOP", "TSTP", "TTIN", "TTOU", "URG", "XCPU", "XFSZ", "VTALRM", "PROF", "WINCH", "IO", "PWR", "SYS", "NUM32", "NUM33", "RTMIN", "NUM35", "NUM36", "NUM37", "NUM38", "NUM39", "NUM40", "NUM41", "NUM42", "NUM43", "NUM44", "NUM45", "NUM46", "NUM47", "NUM48", "NUM49", "NUM50", "NUM51", "NUM52", "NUM53", "NUM54", "NUM55", "NUM56", "NUM57", "NUM58", "NUM59", "NUM60", "NUM61", "NUM62", "NUM63", "RTMAX", "IOT", "CLD", "POLL", 0'
sig_num='0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 6 17 29 '
sig_num_init='0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 6, 17, 29, 0'
sig_size='68'
signal_t='void'
sleep=''
smail=''
small=''
so='so'
sockercflags=''
sockerldflags=''
sockethdr=''
socketlib=''
sort='/usr/bin/sort'
spackage='Gtk-gnutella'
spitshell='cat'
split=''
src='.'
startsh='#!/bin/sh'
strings='/usr/include/string.h'
submit=''
sysman='/usr/local/man'
tablesize=''
tail=''
tar=''
targetarch=''
tbl=''
tee=''
test='test'
timeincl='/usr/include/x86_64-linux-gnu/sys/time.h /usr/include/time.h '
to=':'
touch='/usr/bin/touch'
tr='/usr/bin/tr'
trnl='\n'
troff=''
uname='/usr/bin/uname'
uniq='/usr/bin/uniq'
use_difftime='undef'
usecrosscompile='undef'
usemymalloc='y'
usenm='false'
usevfork='true'
usrinc='/usr/include'
uuname=''
vi=''
voidflags='15'
wc='/usr/bin/wc'
xgettext='/usr/bin/xgettext'
xlibpth='/usr/lib/386 /lib/386'
yacc='bison -y'
yaccflags=''
zcat=''
zip=''
CONFIG=true