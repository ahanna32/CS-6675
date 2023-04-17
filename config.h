/*
 * This file was produced by running the config_h.SH script, which
 * gets its values from config.sh, which is generally produced by
 * running Configure.
 *
 * Feel free to modify any of this as the need arises.  Note, however,
 * that running config_h.SH again will wipe out any changes you've made.
 * For a more permanent change edit config.sh and rerun config_h.SH.
 *
 * $Id$
 */

/*
 * Package name      : gtk-gnutella
 * Source directory  : .
 * Configuration time: Fri Apr 14 11:55:24 EDT 2023
 * Configured by     : ricardo
 * Target system     : linux ricardo-p2p 5.19.0-38-generic #39~22.04.1-ubuntu smp preempt_dynamic fri mar 17 21:16:15 utc 2 x86_64 x86_64 x86_64 gnulinux 
 */

#ifndef _config_h_
#define _config_h_

/* VMS_SYSTEM:
 *	This symbol, if defined, indicates that the program is running under
 *	VMS.  It is currently only set in conjunction with the EUNICE symbol.
 */
/* LINUX_SYSTEM:
 *	This symbol, if defined, indicates that the program is running under
 *	a Linux system.
 */
/*#define VMS_SYSTEM		/ **/
#define LINUX_SYSTEM		/**/

/* ARCHLIB_EXP:
 *	This symbol contains the ~name expanded version of ARCHLIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
#define ARCHLIB_EXP "/usr/local/lib/gtk-gnutella"		/**/

/* BIN:
 *	This symbol holds the path of the bin directory where the package will
 *	be installed. Program must be prepared to deal with ~name substitution.
 */
#define BIN "/usr/local/bin"	/**/

/* BYTEORDER:
 *	This symbol holds the hexadecimal constant defined in byteorder,
 *	i.e. 1234 for little-endian or 4321 for big-ending.
 */
#define BYTEORDER 0x1234	/* large digits for MSB */

/* CHARSIZE:
 *	This symbol contains the size of a char, so that the C preprocessor
 *	can make decisions based on it.
 */
#define CHARSIZE 1

/* CAT2:
 *	This macro catenates 2 tokens together.
 */
/* CAT3:
 *	This macro catenates 3 tokens together.
 */
/* STRINGIFY:
 *	This macro surrounds its token with double quotes.
 */
#if 42 == 1
#define CAT2(a,b)a/**/b
#define CAT3(a,b,c)a/**/b/**/c
#define STRINGIFY(a)"a"
#define SQuoTe(a)a
#define EQuoTe(a)a
#endif
#if 42 == 42
#define CaTiFy(a,b) a ## b
#define CAT2(a,b) CaTiFy(a,b)
#define CAT3(a,b,c) CAT2(CaTiFy(a,b),c)
#define StGiFy(a)# a
#define STRINGIFY(a)StGiFy(a)
#endif
#if 42 != 1 && 42 != 42
#include "Bletch: How does this C preprocessor catenate tokens?"
#endif

/* getdtablesize:
 *	This catches use of the getdtablesize() subroutine, and remaps it
 *	to either ulimit(4,0) or NOFILE, if getdtablesize() isn't available.
 */
/*#define getdtablesize() 	/ **/

/* HAS_ALARM:
 *	This symbol, if defined, indicates that the alarm routine is
 *	available.
 */
#define HAS_ALARM		/**/

/* HAS_ARC4RANDOM:
 *	This symbol, if defined, indicates that the arc4random routine is
 *	available.
 */
/*#define HAS_ARC4RANDOM		/ **/

/* HASATTRIBUTE:
 *	This symbol indicates the C compiler can check for function attributes,
 *	such as printf formats. This is normally only supported by GNU cc.
 */
#define HASATTRIBUTE 	/**/
#ifndef HASATTRIBUTE
#define __attribute__(_arg_)
#endif

/* HAS_BACKTRACE:
 *	This symbol, if defined, indicates that the backtrace() routine is
 *	available to get a stack trace.  The <execinfo.h> header must be
 *	included to use this routine.
 */
#define HAS_BACKTRACE	/**/

/* HAS_BCMP:
 *	This symbol is defined if the bcmp() routine is available to
 *	compare blocks of memory.
 */
#define HAS_BCMP	/**/

/* HAS_BCOPY:
 *	This symbol is defined if the bcopy() routine is available to
 *	copy blocks of memory.
 */
#define HAS_BCOPY	/**/

/* HAS_BFD_LIBRARY:
 *	This symbol, if defined, indicates that the BFD library is available
 *	to inspect symbols and debugging information.  You can safely include
 *	the <bfd.h> file when this symbol is defined, making sure to define
 *	the PACKAGE and PACKAGE_VERSION symbols, just in case we're facing
 *	binutils 2.23 or higher.
 */
/*#define HAS_BFD_LIBRARY		/ **/

/* HAS_BFD_SECTION_1ARG:
 *	This symbol, if defined, indicates that the bfd_section_xxx() accessors
 *	from the BFD library takes only one argument, which is the new behaviour
 *	starting from BFD 2.34.
 */
/*#define HAS_BFD_SECTION_1ARG		/ **/

/* HAS_BIND_TEXTDOMAIN_CODESET:
 *	This symbol, if defined, indicates that the bind_textdomain_codeset routine
 *	is available.
 */
#define HAS_BIND_TEXTDOMAIN_CODESET		/**/

/* HAS_BSEARCH:
 *	This symbol, if defined, indicates that the bsearch() routine
 *	is available to perform a binary search on a sorted array.
 */
#define HAS_BSEARCH	/**/

/* HAS_BUILTIN_BSWAP32:
 *	This symbol, if defined, indicates that __builtin_bswap32 routine is
 *	available to byte-swap a 32-bit value (little <-> big endian).
 */
#define HAS_BUILTIN_BSWAP32	/**/

/* HAS_BUILTIN_BSWAP64:
 *	This symbol, if defined, indicates that __builtin_bswap64 routine is
 *	available to byte-swap a 64-bit value (little <-> big endian).
 */
#define HAS_BUILTIN_BSWAP64	/**/

/* HAS_BUILTIN_CLZ:
 *	This symbol, if defined, indicates that the __builtin_clz routine is
 *	available to count leading zeroes in a word.
 */
#define HAS_BUILTIN_CLZ	/**/

/* HAS_BUILTIN_CTZ:
 *	This symbol, if defined, indicates that __builtin_ctz routine is
 *	available to count trailing zeroes in a word.
 */
#define HAS_BUILTIN_CTZ	/**/

/* HAS_BUILTIN_POPCOUNT:
 *	This symbol, if defined, indicates that __builtin_popcount routine is
 *	available to compute the amount of '1' bits in a word.
 */
#define HAS_BUILTIN_POPCOUNT	/**/

/* HAS_BZERO:
 *	This symbol is defined if the bzero() routine is available to
 *	set a memory block to 0.
 */
#define HAS_BZERO	/**/

/* HAS_CLEARENV:
 *	This symbol is defined when clearenv() is there to clear the
 *	environment.
 */
#define HAS_CLEARENV

/* HAS_CLOCK_GETRES:
 *	This symbol, if defined, indicates that the clock_getres() system call is
 *	available to fetch the granularity of available clock (CLOCK_REALTIME is
 *	a valid clock when the symbol is defined).
 */
#define HAS_CLOCK_GETRES	/**/

/* HAS_CLOCK_GETTIME:
 *	This symbol, if defined, indicates that the clock_gettime() system call is
 *	available to fetch the clock (CLOCK_REALTIME is a valid clock when the
 *	symbol is defined).
 */
#define HAS_CLOCK_GETTIME	/**/

/* HAS_CLOSEFROM:
 *	This symbol is defined when closefrom() can be used.
 */
#define HAS_CLOSEFROM

/* HASCONST:
 *	This symbol, if defined, indicates that this C compiler knows about
 *	the const type. There is no need to actually test for that symbol
 *	within your programs. The mere use of the "const" keyword will
 *	trigger the necessary tests.
 */
#define HASCONST	/**/
#ifndef HASCONST
#define const
#endif

/* HAS_DEV_POLL:
 *	This symbol is defined when /dev/poll can be used.
 */
#undef HAS_DEV_POLL

/* USE_DIFFTIME:
 *	This symbol, if defined, indicates that the difftime routine should
 *	really be used to compare times.
 */
/*#define USE_DIFFTIME		/ **/

/* HAS_DIRENT_D_NAMLEN:
 *	This symbol, if defined, indicates that struct dirent has an
 *	integer member d_namlen to hold the actual string length of d_name.
 */
/*#define HAS_DIRENT_D_NAMLEN		/ **/

/* HAS_DIRENT_D_TYPE:
 *	This symbol, if defined, indicates that struct dirent has an
 *	integer member d_type.  Note that DT_WHT is BSD-specific and may
 *	not be available.  If DT_UNKNOWN is returned, the filesystem does
 *	not fill d_type even though it is present in the dir entry.
 */
#define HAS_DIRENT_D_TYPE		/**/

/* HAS_DIRFD:
 *	This symbol, if defined, indicates that the dirfd() routine is
 *	available to get the underlying file descriptor from a DIR *
 *	opened by opendir().
 */
#define HAS_DIRFD		/**/

/* HAS_DLADDR:
 *	This symbol, if defined, indicates that the dladdr() routine is
 *	available to query the dynamic linker about a specified address.
 */
#define HAS_DLADDR		/**/

/* HAS_END_SYMBOL:
 *	This symbol, if defined, indicates that the C program can declare
 *		extern const int end;
 *	and then use &end to know the end of the BSS segment.
 */
#define HAS_END_SYMBOL	/**/

/* HAS_EPOLL:
 *	This symbol is defined when epoll() can be used.
 */
#define HAS_EPOLL

/* HAS_ETEXT_SYMBOL:
 *	This symbol, if defined, indicates that the C program can declare
 *		extern const int etext;
 *	and then use &etext to know the end of the text segment.
 */
#define HAS_ETEXT_SYMBOL	/**/

/* HAS_FCHDIR:
 *	This symbol, if defined, indicates that the fchdir routine is
 *	available to change the working directory to that of the opened
 *	directory whose file descriptor is given.
 */
#define HAS_FCHDIR	/**/

/* HAS_FDATASYNC:
 *	This symbol, if defined, indicates that the fdatasync routine is available
 *	to synchronize a file's in-core data with the storage device.
 */
#define HAS_FDATASYNC		/**/

/* HAS_FDOPENDIR:
 *	This symbol, if defined, indicates that the fdopendir() routine is
 *	available to open directories using an opened file descriptor already
 *	referring to that directory.
 */
#define HAS_FDOPENDIR		/**/

/* HAS_FORK:
 *	This symbol, if defined, indicates that the fork routine is
 *	available.
 */
#define HAS_FORK		/**/

/* HAS_FSTATAT:
 *	This symbol, if defined, indicates that the fstatat() routine is
 *	available to do file stats with a relative path interepreted in
 *	the context of an opened directory.
 */
#define HAS_FSTATAT		/**/

/* HAS_FSYNC:
 *	This symbol, if defined, indicates that the fsync routine is available
 *	to synchronize a file's in-core state with the storage device.
 */
#define HAS_FSYNC		/**/

/* HAS_GETTIMEOFDAY:
 *	This symbol, if defined, indicates that the gettimeofday() system
 *	call is available for a sub-second accuracy clock. Usually, the file
 *	<sys/resource.h> needs to be included (see I_SYS_RESOURCE).
 *	The type "Timeval" should be used to refer to "struct timeval".
 */
#define HAS_GETTIMEOFDAY	/**/
#ifdef HAS_GETTIMEOFDAY
#define Timeval struct timeval	/* Structure used by gettimeofday() */
#endif

/* HAS_GETADDRINFO:
 *	This symbol is defined when getaddrinfo() can be used.
 */
#define HAS_GETADDRINFO

/* HAS_GETEUID:
 *	This symbol is defined when geteuid() can be used.
 */
#define HAS_GETEUID

/* HAS_UNAME:
 *	This symbol, if defined, indicates that the C program may use the
 *	uname() routine to derive the host name.  See also HAS_GETHOSTNAME
 *	and PHOSTNAME.
 */
#define HAS_UNAME		/**/

/* HAS_GETIFADDRS:
 *	This symbol is defined when getifaddrs() and freeifaddrs() can be used.
 */
#define HAS_GETIFADDRS

/* HAS_GETINVENT:
 *    This symbol, if defined, indicates that the getinvent() routine is
 *    available.
 */
/*#define       HAS_GETINVENT           / **/

/* HAS_GETLOGIN:
 *	This symbol, if defined, indicates that the getlogin routine is
 *	available to get the login name.
 */
#define HAS_GETLOGIN		/**/

/* HAS_GETNAMEINFO:
 *	This symbol is defined when getnameinfo() can be used.
 */
#define HAS_GETNAMEINFO

/* HAS_GETPPID:
 *	This symbol, if defined, indicates that the getppid routine is
 *	available to get the parent process ID.
 */
#define HAS_GETPPID		/**/

/* HAS_GETPROGNAME:
 *	This symbol is defined when getprogname() is there to get the
 *	program name.
 */
#undef HAS_GETPROGNAME

/* HAS_GETPWNAM:
 *	This symbol, if defined, indicates that the getpwnam() routine
 *	is available to get the /etc/passwd structure entries for given
 *	user name.
 */
#define HAS_GETPWNAM	/**/

/* HAS_GETPWUID:
 *	This symbol, if defined, indicates that the getpwuid() routine
 *	is available to get the /etc/passwd structure entries for given
 *	user ID.
 */
#define HAS_GETPWUID	/**/

/* HAS_GETRLIMIT:
 *	This symbol, if defined, indicates that the getrlimit() routine is
 *	available to get process resource limits.
 */
#define HAS_GETRLIMIT		/**/

/* HAS_GETUID:
 *	This symbol is defined when getuid() can be used.
 */
#define HAS_GETUID

/* HAS_GNULIBC:
 *	This symbol, if defined, indicates to the C program that
 *	the GNU C library is being used.  A better check is to use
 *	the __GLIBC__ and __GLIBC_MINOR__ symbols supplied with glibc.
 */
#define HAS_GNULIBC  	/**/
#if defined(HAS_GNULIBC) && !defined(_GNU_SOURCE)
#define _GNU_SOURCE
#endif

/* HAS_HERROR:
 *	This symbol, if defined, indicates that the herror routine is
 *	available.
 */
#define HAS_HERROR		/**/

/* HAS_HSTRERROR:
 *	This symbol, if defined, indicates that the hstrerror routine is
 *	available.
 */
#define HAS_HSTRERROR		/**/

/* USE_IEEE754_FLOAT:
 *	When defined, this symbol indicates that float and double values are
 *	stored using the IEEE-754 floating point format.  See IEEE754_BYTEORDER
 *	to determine the endianness in case these values need to be serialized.
 */
/* IEEE754_BYTEORDER:
 *	This symbol holds the hexadecimal constant defined in ieee754_byteorder,
 *	i.e. 1234 for little-endian or 4321 for big-ending floats.  It is 0 when
 *	floats are not stored in IEEE-754 format.
 */
#define USE_IEEE754_FLOAT
#define IEEE754_BYTEORDER 0x1234	/* large digits for MSB */

/* USE_IP_TOS:
 *	This symbol, if defined, indicates that the IP TOS services are
 *	available and can be used.  Be prepared to include <sys/socket.h>,
 * either <netinet/in.h> or <sys/in.h>, and <netinet/ip.h> when
 *	I_NETINET_IP is defined.
 */
#define USE_IP_TOS		/**/

/* HAS_IPV6:
 *  This symbol is defined when IPv6 can be used
 */
#define HAS_IPV6	/**/

/* HAS_ISASCII:
 *	This manifest constant lets the C program know that isascii
 *	is available.
 */
#define HAS_ISASCII		/**/

/* HAS_KEVENT_INT_UDATA:
 *	This symbol, if defined, indicates that struct kevent has an
 *	integer member udata.
 */
/*#define HAS_KEVENT_INT_UDATA		/ **/

/* HAS_KQUEUE:
 *	This symbol is defined when kqueue() can be used.
 */
#undef HAS_KQUEUE

/* HAS_LOCALE_CHARSET:
 *	This symbol is defined when locale_charset() can be used.
 */
#undef HAS_LOCALE_CHARSET

/* HAS_LSTAT:
 *	This symbol, if defined, indicates that the lstat routine is
 *	available to do file stats on symbolic links.
 */
#define HAS_LSTAT		/**/

/* HAS_MADVISE:
 *	This symbol, if defined, indicates that the madvise routine is
 *	available.
 */
#define HAS_MADVISE		/**/

/* HAS_MEMALIGN:
 *	This symbol, if defined, indicates that the memalign routine is
 *	available to allocate aligned memory.
 */
#define HAS_MEMALIGN		/**/

/* HAS_MEMCPY:
 *	This symbol, if defined, indicates that the memcpy routine is available
 *	to copy blocks of memory.
 */
#define HAS_MEMCPY	/**/

/* HAS_MEMMOVE:
 *	This symbol, if defined, indicates that the memmove routine is available
 *	to copy potentially overlapping blocks of memory. This should be used
 *	only when HAS_SAFE_BCOPY is not defined. If neither is there, roll your
 *	own version.
 */
#define HAS_MEMMOVE	/**/

/* HAS_MEMPCPY:
 *	This symbol, if defined, indicates that the mempcpy routine is available
 *	to copy blocks of memory, returning a pointer past the last written byte.
 */
#define HAS_MEMPCPY	/**/

/* HAS_MEMRCHR:
 *	This symbol, if defined, indicates that the memrchr routine is available
 *	to scan a block of memory backwards for a character.
 *	If undefined, roll your own.
 */
#define HAS_MEMRCHR		/**/

/* HAS_MEMSET:
 *	This symbol, if defined, indicates that the memset routine is available
 *	to set blocks of memory.
 */
#define HAS_MEMSET	/**/

/* HAS_MMAP:
 *	This symbol, if defined, indicates that the mmap system call is
 *	available to map a file into memory.
 */
#define HAS_MMAP		/**/

/* HAS_MSGHDR_MSG_FLAGS:
 *	This symbol, if defined, indicates that struct msghdr has a
 *	member msg_flags.
 */
#define HAS_MSGHDR_MSG_FLAGS		/**/

/* HAS_NANOSLEEP:
 *	This symbol, if defined, indicates that the nanosleep() system call
 *	is available.
 */
#define HAS_NANOSLEEP		/**/

/* HAS_OPENAT:
 *	This symbol, if defined, indicates that the openat() routine is
 *	available to open files with a relative path interepreted in
 *	the context of an opened directory.
 */
#define HAS_OPENAT		/**/

/* HAS_PAUSE:
 *	This symbol, if defined, indicates that the pause routine is
 *	available to suspend a process until a signal is received.
 */
#define HAS_PAUSE		/**/

/* HAS_PIPE2:
 *	This symbol, if defined, indicates that the pipe routine is
 *	available to create an inter-process channel with O_CLOEXEC or
 *	O_NONBLOCK flags.
 */
#define HAS_PIPE2		/**/

/* HAS_POLL:
 *	This symbol, if defined, indicates that the poll routine is
 *	available to poll active file descriptors.  Please check I_POLL and
 *	I_SYS_POLL to know which header should be included as well.
 */
#define HAS_POLL		/**/

/* HAS_POPEN:
 *	This symbol, if defined, indicates that the popen routine is
 *	available to open a pipe from a process.
 */
#define HAS_POPEN		/**/

/* HAS_POSIX_FADVISE:
 *	This symbol is defined when posix_fadvise() can be used.
 */
#define HAS_POSIX_FADVISE

/* HAS_POSIX_MEMALIGN:
 *	This symbol is defined when posix_memalign() can be used.
 */
#define HAS_POSIX_MEMALIGN

/* HAS_PREAD:
 *	This symbol, if defined, indicates that the pread routine is
 *	available to perform reads on a file descriptor at a given offset.
 */
#define HAS_PREAD		/**/

/* HAS_PREADV:
 *	This symbol, if defined, indicates that the preadv routine is
 *	available to perform vectored reads on a file descriptor at a
 * given offset.
 */
#define HAS_PREADV		/**/

/* HAS_PROGRAM_INVOCATION_NAME:
 *	This symbol is defined when the C startup sets the two variables
 *	program_invocation_name and program_invocation_short_name.  To get
 *	these definitions, <errno.h> must be included with __USE_GNU defined.
 */
#define HAS_PROGRAM_INVOCATION_NAME

/* HAS_PTHREAD_ATTR_SETSTACK:
 *	This symbol is defined when pthread_attr_setstack() can be used to set
 *	the thread stack.  Otherwise, use obsoleted pthread_attr_setstackaddr().
 */
#define HAS_PTHREAD_ATTR_SETSTACK

/* HAS_PWRITE:
 *	This symbol, if defined, indicates that the pwrite routine is
 *	available to perform writes on a file descriptor at a given offset.
 */
#define HAS_PWRITE		/**/

/* HAS_PWRITEV:
 *	This symbol, if defined, indicates that the pwritev routine is
 *	available to perform vectored writes on a file descriptor at a
 * given offset.
 */
#define HAS_PWRITEV		/**/

/* HAS_RECVMSG:
 *	This symbol, if defined, indicates that the recvmsg() function
 *	is available.
 */
#define HAS_RECVMSG		/**/

/* HAS_REGCOMP:
 *	This symbol, if defined, indicates that the regcomp() routine is
 *	available to do some regular patern matching (usually on POSIX.2
 *	conforming systems).
 *	When regcomp() exists, it is safe to assume regexec() and regfree()
 *	are also available.
 */
#define HAS_REGCOMP	/**/

/* HAS_REGPARM:
 *	This symbol is defined when __attribute__((__regparm__(n))) can be used.
 */
#define HAS_REGPARM

/* HAS_GETRUSAGE:
 *	This symbol, if defined, indicates that the getrusage() routine is
 *	available to get process statistics with a sub-second accuracy.
 *	Inclusion of <sys/resource.h> and <sys/time.h> may be necessary.
 */
#define HAS_GETRUSAGE		/**/

/* HAS_SBRK:
 *	This symbol, if defined, indicates that the sbrk system call is
 *	available to add/relase core. Always true on Unix.
 */
#define HAS_SBRK	/**/

/* HAS_SCHED_YIELD:
 *	This symbol, if defined, indicates that the sched_yield() routine is
 *	available to yield the CPU.
 */
#define HAS_SCHED_YIELD		/**/

/* HAS_SELECT:
 *	This symbol, if defined, indicates that the select routine is
 *	available to select active file descriptors. If the timeout field
 *	is used, <sys/time.h> may need to be included.
 */
#define HAS_SELECT	/**/

/* HAS_SEMCTL:
 *	This symbol, if defined, indicates that the semctl() routine is
 *	available to perform semaphore control operations.
 */
#define HAS_SEMCTL	/**/

/* HAS_SEMGET:
 *	This symbol, if defined, indicates that the semget() routine is
 *	available to get a set of semaphores.
 */
#define HAS_SEMGET	/**/

/* HAS_SEMOP:
 *	This symbol, if defined, indicates that the semop() routine is
 *	available to execute semaphore operations.
 */
/* HAS_SEMTIMEDOP:
 *	This symbol, if defined, indicates that the semtimedop() routine is
 *	available to execute semaphore operations with a timeout.
 */
#define HAS_SEMOP		/**/
#define HAS_SEMTIMEDOP		/**/

/* HAS_SENDFILE:
 *	This symbol, if defined, indicates that the sendfile routine is
 *	available.
 */
#define HAS_SENDFILE		/**/

/* HAS_SETENV:
 *	This symbol is defined when setenv() is available to change or
 *	add an environment variable.
 */
#define HAS_SETENV

/* HAS_SETPROCTITLE:
 *	This symbol is defined when setproctitle() can be used and takes a
 *	format string.
 */
#undef HAS_SETPROCTITLE

/* HAS_SETPROGNAME:
 *	This symbol is defined when setprogname() is there to set the
 *	program name.
 */
#undef HAS_SETPROGNAME

/* HAS_SETSID:
 *	This symbol, if defined, indicates that the setsid routine is
 *	available to set the process group ID.
 */
#define HAS_SETSID	/**/

/* HAS_SIGACTION:
 *	This symbol, if defined, indicates that Vr4's sigaction() routine
 *	is available.
 */
#define HAS_SIGACTION	/**/

/* HAS_SIGALTSTACK:
 *	This symbol, if defined, indicates that the sigaltstack() routine
 *	is available to define an alternate signal stack.
 */
#define HAS_SIGALTSTACK	/**/

/* HAS_SIGPROCMASK:
 *	This symbol, if defined, indicates that the sigprocmask() routine is
 *	available to examine and change blocked signals.
 */
#define HAS_SIGPROCMASK	/**/

/* HAS_SIGSETJMP:
 *	This variable indicates to the C program that the sigsetjmp()
 *	routine is available to save the calling process's registers
 *	and stack environment for later use by siglongjmp(), and
 *	to optionally save the process's signal mask.  See
 *	Sigjmp_buf, Sigsetjmp, and Siglongjmp.
 */
/* Sigsetjmp:
 *	This macro is used in the same way as sigsetjmp(), but will invoke
 *	traditional setjmp() if sigsetjmp isn't available.
 *	See HAS_SIGSETJMP.
 */
/* Siglongjmp:
 *	This macro is used in the same way as siglongjmp(), but will invoke
 *	traditional longjmp() if siglongjmp isn't available.
 *	See HAS_SIGSETJMP.
 */
#define HAS_SIGSETJMP	/**/
#ifdef HAS_SIGSETJMP
#define Sigjmp_buf sigjmp_buf
#define Sigsetjmp(buf,save_mask) sigsetjmp((buf),(save_mask))
#define Siglongjmp(buf,retval) siglongjmp((buf),(retval))
#else
#define Sigjmp_buf jmp_buf
#define Sigsetjmp(buf,save_mask) setjmp((buf))
#define Siglongjmp(buf,retval) longjmp((buf),(retval))
#endif

/* HAS_SOCKADDR_IN_SIN_LEN:
 *	This symbol is defined if struct sockaddr_in has sin_len.
 */
#undef HAS_SOCKADDR_IN_SIN_LEN

/* HAS_SOCKADDR_UN:
 *	This symbol is defined if struct sockaddr_un exists, allowing the
 *	creation of file sockets.
 */
#define HAS_SOCKADDR_UN

/* HAS_SOCKER_GET:
 *	This symbol is defined when socker_get() can be used to get sockets
 *	bound to privileged ports.
 */
#undef HAS_SOCKER_GET

/* HAS_SOCKETPAIR:
 *	This symbol, if defined, indicates that the BSD socketpair() call is
 *	supported.
 */
#define HAS_SOCKETPAIR	/**/

/* HAS_STATFS:
 *	This symbol, if defined, indicates that the Linux statfs() system call
 *	is available to get filesystem statistics.
 */
#define HAS_STATFS		/**/

/* HAS_STATVFS:
 *	This symbol, if defined, indicates that the POSIX statvfs() system call
 *	is available to get filesystem statistics.
 */
#define HAS_STATVFS		/**/

/* HAS_INDEX:
 *	This symbol is defined to indicate that the index()/rindex()
 *	functions are available for string searching.
 */
#define HAS_INDEX	/**/

/* HAS_STRLCAT:
 *	This symbol, if defined, indicates that the strlcat routine is
 *	available.
 */
/*#define HAS_STRLCAT		/ **/

/* HAS_STRLCPY:
 *	This symbol, if defined, indicates that the strlcpy routine is
 *	available.
 */
/*#define HAS_STRLCPY		/ **/

/* HAS_SYNC_ATOMIC:
 *	This symbol, if defined, indicates that __sync_xxx() atomic operations
 *	are made available by the compiler, namely __sync_synchronize() to
 *	issue a memory barrieer, __sync_bool_compare_and_swap() for issuing a
 *	test-and-set and __sync_fetch_and_add() for atomic increases of values.
 */
#define HAS_SYNC_ATOMIC	/**/

/* HAS_SYSCALL:
 *	This symbol, if defined, indicates that the syscall routine is
 *	available to call arbitrary system calls. If undefined, that's tough.
 */
#define HAS_SYSCALL	/**/

/* HAS_SYSCTL:
 *	This symbol, if defined, indicates that the sysctl routine is
 *	available.
 */
/*#define HAS_SYSCTL		/ **/

/* HAS_SYSTEM:
 *	This symbol, if defined, indicates that the system routine is
 *	available to issue a shell command.
 */
#define HAS_SYSTEM	/**/

/* HAS_TIMES:
 *	This symbol, if defined, indicates that the times() routine exists.
 *	Note that this became obsolete on some systems (SUNOS), which now
 * use getrusage(). It may be necessary to include <sys/times.h>.
 */
#define HAS_TIMES		/**/

/* HAS_TTYNAME:
 *	This symbol, if defined, indicates that the ttyname() routine is
 *	available to determine the pathname of the terminal associated with
 *	a file descriptor.  The <unistd.h> header must be included to use
 *	this routine.
 */
#define HAS_TTYNAME	/**/

/* HAS_UCONTEXT_MCONTEXT:
 *	This symbol, if defined, indicates that the C program can access the
 *	processor's general registers through some field in the uc_mcontext
 *	machine context field from the ucontext_t structure.
 */
#define HAS_UCONTEXT_MCONTEXT	/**/

/* HAS_UCONTEXT_MCONTEXT_GREGS:
 *	This symbol, if defined, indicates that the C program can access the
 *	processor's general registers through the gregs[] array in the uc_mcontext
 *	machine context field from the ucontext_t structure.
 */
#define HAS_UCONTEXT_MCONTEXT_GREGS	/**/

/* HAS_USLEEP:
 *	This symbol, if defined, indicates that the usleep routine is
 *	available to let the process sleep on a sub-second accuracy.
 */
#define HAS_USLEEP		/**/

/* HAS_VFORK:
 *	This symbol, if defined, indicates that vfork() exists.
 */
#define HAS_VFORK	/**/

/* HASVOLATILE:
 *	This symbol, if defined, indicates that this C compiler knows about
 *	the volatile declaration.
 */
#define	HASVOLATILE	/**/
#ifndef HASVOLATILE
#define volatile
#endif

/* HAS_VSNPRINTF:
 *	This symbol, if defined, indicates that the vsnprintf routine is
 *	available.
 */
#define HAS_VSNPRINTF		/**/

/* HAS_WAITPID:
 *	This symbol, if defined, indicates that the waitpid routine is
 *	available to wait for child process.
 */
#define HAS_WAITPID	/**/

/* EBCDIC:
 *     This symbol, if defined, indicates that this system uses
 *	EBCDIC encoding.
 */
/*#define	EBCDIC 		/ **/

/* ENABLE_NLS:
 *	This symbol, when defines, indicates that the program should enable
 *	Native Language Support (NLS) for internationalization (I18N).
 */
#define ENABLE_NLS	/**/

/* I_ALLOCA:
 *	This symbol, if defined, indicates that <alloca.h> exists and should
 *	be included.
 */
#define I_ALLOCA	/**/

/* I_ARPA_INET:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <arpa/inet.h> to get inet_addr and friends declarations.
 */
#define	I_ARPA_INET		/**/

/* I_DIRENT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <dirent.h>. Using this symbol also triggers the definition
 *	of the Direntry_t define which ends up being 'struct dirent' or
 *	'struct direct' depending on the availability of <dirent.h>.
 */
#define I_DIRENT		/**/

/* I_DLFCN:
 *	This symbol, if defined, indicates that <dlfcn.h> exists and should
 *	be included.
 */
#define I_DLFCN		/**/

/* I_EXECINFO:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <execinfo.h> for backtrace() support.
 */
#define I_EXECINFO		/**/

/* I_FCNTL:
 *	This manifest constant tells the C program to include <fcntl.h>.
 */
/*#define I_FCNTL	/ **/

/* I_ICONV:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <iconv.h>.
 */
#define I_ICONV	/**/

/* I_IFADDRS:
 *    This symbol, if defined, indicates to the C program that it should
 *    include <ifaddrs.h>.
 */
#define I_IFADDRS         /**/

/* I_INTTYPES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <inttypes.h> to get format conversions of integer types.
 */
#define I_INTTYPES		/**/

/* I_INVENT:
 *    This symbol, if defined, indicates to the C program that it should
 *    include <invent.h>.
 */
/*#define I_INVENT         / **/

/* I_LANGINFO:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <langinfo.h>.
 */
#define I_LANGINFO		/**/

/* I_LIBCHARSET:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <libcharset.h>.
 */
/*#define I_LIBCHARSET		/ **/

/* I_LINUX_NETLINK:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <linux/netlink.h> to get definitions for the NLMSG_DATA() and
 *	other NLMSG_NEXT() macros.
 */
#define I_LINUX_NETLINK		/**/

/* I_LINUX_RTNETLINK:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <linux/rtnetlink.h> to get definitions for the RTA_DATA() and
 *	other RTA_NEXT() macros.
 */
#define I_LINUX_RTNETLINK		/**/

/* I_MATH:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <math.h>.
 */
#define I_MATH		/**/

/* I_NETDB:
 *    This symbol, if defined, indicates to the C program that it should
 *    include <netdb.h>.
 */
#define I_NETDB         /**/

/* I_NET_IF:
 *    This symbol, if defined, indicates to the C program that it should
 *    include <net/if.h>.
 */
#define I_NET_IF         /**/

/* I_NET_ROUTE:
 *	This symbol, if defined, indicates to the C program that it can
 *	include <net/route.h>.
 */
#define I_NET_ROUTE	/**/

/* I_NETINET_IN:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <netinet/in.h>. Otherwise, you may try <sys/in.h>.
 */
#define I_NETINET_IN	/**/

/* I_NETINET_IP:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <netinet/ip.h>.
 */
#define I_NETINET_IP	/**/

/* I_POLL:
 *	This symbol, if defined, indicates that the program may include
 *	<poll.h>.  If there is no <poll.h>, then you may check I_SYS_POLL
 *	instead to see whether there is a <sys/poll.h> to include.
 */
#define I_POLL	/**/

/* I_PTHREAD:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <pthread.h> for POSIX threads.
 */
#define I_PTHREAD		/**/

/* I_PWD:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <pwd.h>.
 */
#define I_PWD		/**/

/* I_REGEX:
 *	This symbol, if defined, indicates that <regex.h> exists and should
 *	be included.
 */
#define I_REGEX	/**/

/* I_SCHED:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sched.h> to get the definition of sched_yield().
 */
#define I_SCHED		/**/

/* I_STDLIB:
 *	This symbol, if defined, indicates that <stdlib.h> exists and should
 *	be included.
 */
#define I_STDLIB		/**/

/* I_STRING:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <string.h> (USG systems) instead of <strings.h> (BSD systems).
 */
#define I_STRING		/**/

/* I_SYS_FILE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/file.h> to get definition of R_OK and friends.
 */
#define I_SYS_FILE		/**/

/* I_SYS_IPC:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/ipc.h> to get the defines for SysV IPCs.
 */
#define I_SYS_IPC		/**/

/* I_SYS_MMAN:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/mman.h>.
 */
#define	I_SYS_MMAN		/**/

/* I_SYS_MOUNT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/mount.h> to get the struct statfs definition for the
 *	statfs() system call.
 */
#define I_SYS_MOUNT		/**/

/* I_SYS_PARAM:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/param.h>.
 */
#define I_SYS_PARAM		/**/

/* I_SYS_POLL:
 *	This symbol, if defined, indicates that the program may include
 *	<sys/poll.h>.  When I_POLL is also defined, it's probably safest
 *	to only include <poll.h>.
 */
#define I_SYS_POLL	/**/

/* I_SYS_RESOURCE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/resource.h>.
 */
#define I_SYS_RESOURCE		/**/

/* I_SYS_SELECT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/select.h> in order to get definition of struct timeval.
 */
#define I_SYS_SELECT	/**/

/* I_SYS_SEM:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/sem.h> to use SysV semaphores.
 */
#define I_SYS_SEM		/**/

/* I_SYS_SENDFILE:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/sendfile.h>.
 */
#define I_SYS_SENDFILE		/**/

/* I_SYS_SOCKET:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/socket.h> before performing socket calls.
 */
#define I_SYS_SOCKET		/**/

/* I_SYS_STAT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/stat.h>.
 */
#define	I_SYS_STAT		/**/

/* I_SYS_STATVFS:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/statvfs.h> to get the struct statvfs definition for the
 *	statvfs() system call.
 */
#define I_SYS_STATVFS		/**/

/* I_SYS_SYSCTL:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/sysctl.h>.
 */
/*#define I_SYS_SYSCTL		/ **/

/* I_SYS_TIMES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/times.h>.
 */
#define	I_SYS_TIMES		/**/

/* I_SYS_TYPES:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/types.h>.
 */
#define	I_SYS_TYPES		/**/

/* I_SYS_UN:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/un.h> to get UNIX domain socket definitions.
 */
#define I_SYS_UN		/**/

/* I_SYS_UTSNAME:
 *    This symbol, if defined, indicates to the C program that it should
 *    include <sys/utsname.h>.
 */
#define I_SYS_UTSNAME         /**/

/* I_SYS_VFS:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/vfs.h> to get the struct statfs definition for the
 *	statfs() system call.
 */
#define I_SYS_VFS		/**/

/* I_SYS_WAIT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/wait.h>.
 */
#define I_SYS_WAIT	/**/

/* I_TIME:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <time.h>.
 */
/* I_SYS_TIME:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/time.h>.
 */
/* I_SYS_TIME_KERNEL:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/time.h> with KERNEL defined.
 */
#define I_TIME		/**/
#define I_SYS_TIME		/**/
/*#define I_SYS_TIME_KERNEL		/ **/

/* I_UCONTEXT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <ucontext.h> to get at the user thread context.  A portable
 *	program must also check I_SYS_UCONTEXT for <sys/ucontex.h> inclusion,
 *	especially on OSX.
 */
/* I_SYS_UCONTEXT:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <sys/ucontext.h> to get at the user thread context.  A portable
 *	program must also check I_UCONTEXT for <ucontex.h> inclusion.
 */
#define I_UCONTEXT		/**/
/*#define I_SYS_UCONTEXT		/ **/

/* I_UNISTD:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <unistd.h>.
 */
#define I_UNISTD		/**/

/* I_STDARG:
 *	This symbol, if defined, indicates that <stdarg.h> exists and should
 *	be included.
 */
#define I_STDARG		/**/

/* I_WINSOCK2:
 *	This symbol, if defined, indicates to the C program that it should
 *	include <Winsock2.h>.
 */
/*#define I_WINSOCK2		/ **/

/* CAN_HANDLE_64BITS:
 *	When defined, this indicates that the compiler can handle 64-bit values
 *	despite the CPU having only 32-bit registers.  These are available using
 *	the "long long" C type.  It is only defined for ILP32 machines, since
 *	64-bit support is naturally available on ILP64 and LP64 machines.
 */
#define CAN_HANDLE_64BITS	/**/

/* INTSIZE:
 *	This symbol contains the value of sizeof(int) so that the C
 *	preprocessor can make decisions based on it.
 */
/* LONGSIZE:
 *	This symbol contains the value of sizeof(long) so that the C
 *	preprocessor can make decisions based on it.
 */
/* SHORTSIZE:
 *	This symbol contains the value of sizeof(short) so that the C
 *	preprocessor can make decisions based on it.
 */
#define INTSIZE 4
#define LONGSIZE 8
#define SHORTSIZE 2

/* LOCALE_EXP:
 *	This symbol holds the possibly ~name expanded place where localization
 *	files for the package are expected to be found.
 *	Only meaningful when ENABLE_NLS is defined.
 */
#define LOCALE_EXP "/usr/local/share/locale"

/* VAL_O_NONBLOCK:
 *	This symbol is to be used during open() or fcntl(F_SETFL) to turn on
 *	non-blocking I/O for the file descriptor. Note that there is no way
 *	back, i.e. you cannot turn it blocking again this way. If you wish to
 *	alternatively switch between blocking and non-blocking, use the
 *	ioctl(FIOSNBIO) call instead, but that is not supported by all devices.
 */
/* VAL_EAGAIN:
 *	This symbol holds the errno error code set by read() when no data was
 *	present on the non-blocking file descriptor.
 *
 * FIXME: And who guarantees this isn't e.g. device-dependent?
 *	   If EAGAIN is defined one should expect it.
 *	   If EWOULDBLOCK is defined one should expect it.
 *	   If both are defined one should expect both.
 * 	   -- cbiere, 2011-01-18
 */
#define VAL_O_NONBLOCK O_NONBLOCK
#define VAL_EAGAIN EAGAIN

/* OFFICIAL_BUILD:
 * When defined, the build is "official".  Programs generated for an
 *	official build MUST NOT peek into the place where the sources lie, via
 *	PACKAGE_SOURCE_DIR or any other means.
 */
#define OFFICIAL_BUILD	/**/

/* PACKAGE:
 *	This variable contains the name of the package being built.
 */
#define PACKAGE "gtk-gnutella"

/* PACKAGE_SOURCE_DIR:
 * Holds the directory name holding the package source.
 */
#define PACKAGE_SOURCE_DIR "/home/ricardo/Downloads/gtk-gnutella-1.2.2"

/* PRIVLIB_EXP:
 *	This symbol contains the ~name expanded version of PRIVLIB, to be used
 *	in programs that are not prepared to deal with ~ expansion at run-time.
 */
#define PRIVLIB_EXP "/usr/local/share/gtk-gnutella"		/**/

/* PTRSIZE:
 *	This symbol contains the size of a pointer, so that the C preprocessor
 *	can make decisions based on it.
 */
#define PTRSIZE 8

/* SIG_NAME:
 *	This symbol contains a list of signal names in order of
 *	signal number. This is intended
 *	to be used as a static array initialization, like this:
 *		char *sig_name[] = { SIG_NAME };
 *	The signals in the list are separated with commas, and each signal
 *	is surrounded by double quotes. There is no leading SIG in the signal
 *	name, i.e. SIGQUIT is known as "QUIT".
 *	Gaps in the signal numbers (up to NSIG) are filled in with NUMnn,
 *	etc., where nn is the actual signal number (e.g. NUM37).
 *	The signal number for sig_name[i] is stored in sig_num[i].
 *	The last element is 0 to terminate the list with a NULL.  This
 *	corresponds to the 0 at the end of the sig_num list.
 */
/* SIG_COUNT:
 *	This variable contains a number larger than the largest
 *	signal number.  This is usually the same as the NSIG macro.
 */
#define SIG_NAME "ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "BUS", "FPE", "KILL", "USR1", "SEGV", "USR2", "PIPE", "ALRM", "TERM", "STKFLT", "CHLD", "CONT", "STOP", "TSTP", "TTIN", "TTOU", "URG", "XCPU", "XFSZ", "VTALRM", "PROF", "WINCH", "IO", "PWR", "SYS", "NUM32", "NUM33", "RTMIN", "NUM35", "NUM36", "NUM37", "NUM38", "NUM39", "NUM40", "NUM41", "NUM42", "NUM43", "NUM44", "NUM45", "NUM46", "NUM47", "NUM48", "NUM49", "NUM50", "NUM51", "NUM52", "NUM53", "NUM54", "NUM55", "NUM56", "NUM57", "NUM58", "NUM59", "NUM60", "NUM61", "NUM62", "NUM63", "RTMAX", "IOT", "CLD", "POLL", 0		/**/
#define SIG_COUNT 65			/**/

/* VOIDFLAGS:
 *	This symbol indicates how much support of the void type is given by this
 *	compiler.  What various bits mean:
 *
 *	    1 = supports declaration of void
 *	    2 = supports arrays of pointers to functions returning void
 *	    4 = supports comparisons between pointers to void functions and
 *		    addresses of void functions
 *	    8 = suports declaration of generic void pointers
 *
 *	The package designer should define VOIDUSED to indicate the requirements
 *	of the package.  This can be done either by #defining VOIDUSED before
 *	including config.h, or by defining defvoidused in Myinit.U.  If the
 *	latter approach is taken, only those flags will be tested.  If the
 *	level of void support necessary is not present, defines void to int.
 */
#ifndef VOIDUSED
#define VOIDUSED 15
#endif
#define VOIDFLAGS 15
#if (VOIDFLAGS & VOIDUSED) != VOIDUSED
#define void int		/* is void to be avoided? */
#define M_VOID			/* Xenix strikes again */
#endif

/* MEM_ALIGNBYTES:
 *	This symbol contains the number of bytes required to align a
 *	double. Usual values are 2, 4 and 8.
 */
#define MEM_ALIGNBYTES 8	/**/

/* USE_MY_MALLOC:
 *	This symbol, if defined, indicates that we're using our own malloc.
 */
#define USE_MY_MALLOC		/**/

/* CAN_PROTOTYPE:
 *	If defined, this macro indicates that the C compiler can handle
 *	function prototypes.
 */
/* P:
 *	This macro is used to declare function parameters for folks who want
 *	to make declarations with prototypes using a different style than
 *	the above macros.  Use double parentheses.  For example:
 *
 *		int main P((int argc, char *argv[]));
 */
#define	CAN_PROTOTYPE	/**/
#ifdef CAN_PROTOTYPE
#define	P(args) args
#else
#define	P(args) ()
#endif

/* HAS_DBUS:
 * This symbol is defined when dbus is present
 */
/*#define HAS_DBUS  / **/

/* USE_GLIB1:
 * This symbol is defined when compiling for GLib 1.x.
 */
/* USE_GLIB2:
 * This symbol is defined when compiling for GLib 2.x.
 */
/*#define USE_GLIB1    / **/
#define USE_GLIB2    /**/

/* HAS_GNUTLS:
 * This symbol is defined when GnuTLS is present
 */
/*#define HAS_GNUTLS  / **/

/* USE_GTK1:
 * This symbol is defined when compiling for the GTK1 toolkit.
 */
/* USE_GTK2:
 * This symbol is defined when compiling for the GTK2 toolkit.
 */
/*#define USE_GTK1    / **/
#define USE_GTK2    /**/

/* USE_REMOTE_CTRL:
 * This symbol is defined when they want remote control support.
 */
/*#define USE_REMOTE_CTRL    / **/

/* USE_TOPLESS:
 *	This symbol, when defined, indicates that there is no GUI interface.
 */
/*#define USE_TOPLESS	/ **/

#endif
