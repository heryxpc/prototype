
//  P() {0==-1}

/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */


/* We do not support C11 <threads.h>.  */
/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */



/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.
   _FORTIFY_SOURCE	If set to numeric value > 0 additional security
			measures are defined, according to level.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _SVID_SOURCE, _BSD_SOURCE, and _POSIX_SOURCE set to one and
   _POSIX_C_SOURCE set to 200809L.  If more than one of these are
   defined, they accumulate.  For example __STRICT_ANSI__,
   _POSIX_SOURCE and _POSIX_C_SOURCE together give you ISO C, 1003.1,
   and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Convenience macros to test the versions of glibc and gcc.
   Use them like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note - they won't work for gcc1 or glibc1, since the _MINOR macros
   were not defined then.  */
/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE, _BSD_SOURCE and _SVID_SOURCE.  */
/* This is to enable the ISO C11 extension.  */





/* This is to enable the ISO C99 extension.  */





/* This is to enable the ISO C90 Amendment 1:1995 extension.  */





/* This is to enable compatibility for ISO C++11.

   So far g++ does not provide a macro.  Check the temporary macro for
   now, too.  */





/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* This is here only because every header file already includes this one.  */


/* Copyright (C) 1992-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */




/* Some user header file might have defined this before.  */
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */




/* C++ needs to know that types and declarations are C, not C++.  */
/* The standard library needs the functions from the ISO C90 standard
   in the std namespace.  At the same time we want to be safe for
   future changes and we include the ISO C99 code in the non-standard
   namespace __c99.  The C++ wrapper header take case of adding the
   definitions to the global namespace.  */
/* For compatibility we do not add the declarations into any
   namespace.  They will end up in the global namespace which is what
   old code expects.  */
/* Fortify support.  */
/* Support for flexible arrays.  */
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */







/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* This declaration tells the compiler that the value is constant.  */






/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
/* gcc allows marking deprecated functions.  */






/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */






/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
/* Forces a function to be always inlined.  */






/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */





/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above. */




/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */






/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

/* Get size_t, wchar_t and NULL from <stddef.h>.  */





/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

//  P() {0==-1}

typedef unsigned long int size_t;
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */

//  P() {0==-1}

typedef int wchar_t;
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */



/* Returned by `div'.  */


/* Quotient.  */
/* Remainder.  */

//  P() {0==-1}

typedef struct {
   int quot;
   int rem;
} div_t;

/* Returned by `ldiv'.  */



/* Quotient.  */
/* Remainder.  */

//  P() {0==-1}

typedef struct {
   long int quot;
   long int rem;
} ldiv_t;






/* Returned by `lldiv'.  */


/* Quotient.  */
/* Remainder.  */

//  P() {0==-1}

typedef struct {
   long long int quot;
   long long int rem;
} lldiv_t;





/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */


//  P() {0==-1}

size_t __ctype_get_mb_cur_max(void);



/* Convert a string to a floating-point number.  */


//  P() {0==-1}

extern double atof(const char *__nptr);
/* Convert a string to an integer.  */


//  P() {0==-1}

extern int atoi(const char *__nptr);
/* Convert a string to a long integer.  */


//  P() {0==-1}

extern long int atol(const char *__nptr);




/* Convert a string to a long long integer.  */


//  P() {0==-1}

extern long long int atoll(const char *__nptr);




/* Convert a string to a floating-point number.  */



//  P() {0==-1}

extern double strtod(const char *__nptr, char **__endptr);




/* Likewise for `float' and `long double' sizes of floating-point numbers.  */


//  P() {0==-1}

extern float strtof(const char *__nptr, char **__endptr);




//  P() {0==-1}

extern long double strtold(const char *__nptr, char **__endptr);




/* Convert a string to a long integer.  */



//  P() {0==-1}

extern long int strtol(const char *__nptr, char **__endptr, int __base);
/* Convert a string to an unsigned long integer.  */



//  P() {0==-1}

extern unsigned long int strtoul(const char *__nptr, char **__endptr, int __base);


/* Convert a string to a quadword integer.  */




//  P() {0==-1}

extern long long int strtoll(const char *__nptr, char **__endptr, int __base);
/* Convert a string to an unsigned quadword integer.  */




//  P() {0==-1}

extern unsigned long long int strtoull(const char *__nptr, char **__endptr, int __base);


/* Return a random integer between 0 and RAND_MAX inclusive.  */

//  P() {0==-1}

extern int rand(void);
/* Seed the random number generator with the given number.  */

//  P() {0==-1}

extern void srand(unsigned int __seed);


/* Allocate SIZE bytes of memory.  */

//  P() {0==-1}

extern void *malloc(size_t __size);
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */


//  P() {0==-1}

extern void *calloc(size_t __nmemb, size_t __size);





/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */


//  P() {0==-1}

extern void *realloc(void *__ptr, size_t __size);
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */

//  P() {0==-1}

extern void free(void *__ptr);


/* Abort execution and generate a core-dump.  */

//  P() {0==-1}

extern void abort(void);


/* Register a function to be called when `exit' is called.  */

//  P() {0==-1}

extern int atexit(void (*__func)(void));


/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */

//  P() {0==-1}

extern void exit(int __status);











/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */

//  P() {0==-1}

void _Exit(int __status);





/* Return the value of envariable NAME, or NULL if it doesn't exist.  */

//  P() {0==-1}

extern char *getenv(const char *__name);


/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

//  P() {0==-1}

extern int system(const char *__command);

/* Shorthand for type of comparison functions.  */



//  P() {0==-1}

typedef int (*__compar_fn_t)(void *, void *);

/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */



//  P() {0==-1}

extern void *bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar);





/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */


//  P() {0==-1}

extern void qsort(void *__base, size_t __nmemb, size_t __size, __compar_fn_t __compar);







/* Return the absolute value of X.  */

//  P() {0==-1}

extern int abs(int __x);

//  P() {0==-1}

extern long int labs(long int __x);





//  P() {0==-1}

extern long long int llabs(long long int __x);




/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */


//  P() {0==-1}

extern div_t div(int __numer, int __denom);


//  P() {0==-1}

extern ldiv_t ldiv(long int __numer, long int __denom);







//  P() {0==-1}

extern lldiv_t lldiv(long long int __numer, long long int __denom);


/* Return the length of the multibyte character
   in S, which is no longer than N.  */

//  P() {0==-1}

extern int mblen(const char *__s, size_t __n);
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */


//  P() {0==-1}

extern int mbtowc(wchar_t *__pwc, const char *__s, size_t __n);
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */

//  P() {0==-1}

extern int wctomb(char *__s, wchar_t __wchar);


/* Convert a multibyte string to a wide char string.  */


//  P() {0==-1}

extern size_t mbstowcs(wchar_t *__pwcs, const char *__s, size_t __n);
/* Convert a wide char string to multibyte string.  */



//  P() {0==-1}

extern size_t wcstombs(char *__s, const wchar_t *__pwcs, size_t __n);

/* X/Open pseudo terminal handling.  */
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Define some macros helping to catch buffer overflows.  */


//  P() {0==-1}

void __VERIFIER_error();


/* Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* Copyright (C) 1992-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */





/* This file defines `__BYTE_ORDER' for the particular machine.  */
/* i386/x86_64 are little-endian.  */

/* Some machines may need to use a different endianness for floating point
   values.  */
/* Definitions for POSIX 1003.1b-1993 (aka POSIX.4) scheduling interface.
   Copyright (C) 1996-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Get type definitions.  */
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */




/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */

/* Convenience types.  */

//  P() {0==-1}

typedef unsigned char __u_char;

//  P() {0==-1}

typedef unsigned short __u_short;

//  P() {0==-1}

typedef unsigned int __u_int;

//  P() {0==-1}

typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */

//  P() {0==-1}

typedef signed char __int8_t;

//  P() {0==-1}

typedef unsigned char __uint8_t;

//  P() {0==-1}

typedef signed short __int16_t;

//  P() {0==-1}

typedef unsigned short __uint16_t;

//  P() {0==-1}

typedef signed int __int32_t;

//  P() {0==-1}

typedef unsigned int __uint32_t;


//  P() {0==-1}

typedef signed long int __int64_t;

//  P() {0==-1}

typedef unsigned long int __uint64_t;





/* quad_t is also 64 bits.  */


//  P() {0==-1}

typedef long int __quad_t;

//  P() {0==-1}

typedef unsigned long int __u_quad_t;






/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
/* No need to mark the typedef with __extension__.   */




/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */


/* Same for ino_t and ino64_t.  */



/* Number of descriptors that can fit in an `fd_set'.  */



//  P() {0==-1}

typedef unsigned long int __dev_t;
/* Type of device numbers.  */

//  P() {0==-1}

typedef unsigned int __uid_t;
/* Type of user identifications.  */

//  P() {0==-1}

typedef unsigned int __gid_t;
/* Type of group identifications.  */

//  P() {0==-1}

typedef unsigned long int __ino_t;
/* Type of file serial numbers.  */

//  P() {0==-1}

typedef unsigned long int __ino64_t;
/* Type of file serial numbers (LFS).*/

//  P() {0==-1}

typedef unsigned int __mode_t;
/* Type of file attribute bitmasks.  */

//  P() {0==-1}

typedef unsigned long int __nlink_t;
/* Type of file link counts.  */

//  P() {0==-1}

typedef long int __off_t;
/* Type of file sizes and offsets.  */

//  P() {0==-1}

typedef long int __off64_t;
/* Type of file sizes and offsets (LFS).  */

//  P() {0==-1}

typedef int __pid_t;
/* Type of process identifications.  */

//  P() {0==-1}

typedef struct {
   int __val[2];
} __fsid_t;
/* Type of file system IDs.  */

//  P() {0==-1}

typedef long int __clock_t;
/* Type of CPU usage counts.  */

//  P() {0==-1}

typedef unsigned long int __rlim_t;
/* Type for resource measurement.  */

//  P() {0==-1}

typedef unsigned long int __rlim64_t;
/* Type for resource measurement (LFS).  */

//  P() {0==-1}

typedef unsigned int __id_t;
/* General type for IDs.  */

//  P() {0==-1}

typedef long int __time_t;
/* Seconds since the Epoch.  */

//  P() {0==-1}

typedef unsigned int __useconds_t;
/* Count of microseconds.  */

//  P() {0==-1}

typedef long int __suseconds_t;
/* Signed count of microseconds.  */


//  P() {0==-1}

typedef int __daddr_t;
/* The type of a disk address.  */

//  P() {0==-1}

typedef int __key_t;
/* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */

//  P() {0==-1}

typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */

//  P() {0==-1}

typedef void *__timer_t;

/* Type to represent block size.  */

//  P() {0==-1}

typedef long int __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */

//  P() {0==-1}

typedef long int __blkcnt_t;

//  P() {0==-1}

typedef long int __blkcnt64_t;

/* Type to count file system blocks.  */

//  P() {0==-1}

typedef unsigned long int __fsblkcnt_t;

//  P() {0==-1}

typedef unsigned long int __fsblkcnt64_t;

/* Type to count file system nodes.  */

//  P() {0==-1}

typedef unsigned long int __fsfilcnt_t;

//  P() {0==-1}

typedef unsigned long int __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */

//  P() {0==-1}

typedef long int __fsword_t;


//  P() {0==-1}

typedef long int __ssize_t;
/* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */

//  P() {0==-1}

typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */

//  P() {0==-1}

typedef unsigned long int __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */

//  P() {0==-1}

typedef __off64_t __loff_t;
/* Type of file sizes and offsets (LFS).  */

//  P() {0==-1}

typedef __quad_t *__qaddr_t;

//  P() {0==-1}

typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */

//  P() {0==-1}

typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */

//  P() {0==-1}

typedef unsigned int __socklen_t;


/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */



/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */


/* Returned by `time'.  */

//  P() {0==-1}

typedef __time_t time_t;

/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */

/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */


/* Seconds.  */
/* Nanoseconds.  */

//  P() {0==-1}

struct timespec {
   __time_t tv_sec;
   __syscall_slong_t tv_nsec;
};



//  P() {0==-1}

typedef __pid_t pid_t;




/* Get system specific constant and data structure definitions.  */
/* Definitions of constants and data structure for POSIX 1003.1b-1993
   scheduling interface.
   Copyright (C) 1996-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* Scheduling algorithms.  */
/* The official definition.  */

//  P() {0==-1}

struct sched_param {
   int __sched_priority;
};









/* Data structure to describe a process' schedulability.  */

//  P() {0==-1}

struct __sched_param {
   int __sched_priority;
};






/* Size definition for CPU sets.  */



/* Type for array elements in 'cpu_set_t'.  */

//  P() {0==-1}

typedef unsigned long int __cpu_mask;

//  P() {0==-1}

typedef struct {
   __cpu_mask __bits[1024/(8*sizeof(__cpu_mask))];
} cpu_set_t;

/* Access functions for CPU masks.  */




//  P() {0==-1}

int __sched_cpucount(size_t __setsize, const cpu_set_t *__setp);

//  P() {0==-1}

cpu_set_t *__sched_cpualloc(size_t __count);

//  P() {0==-1}

void __sched_cpufree(cpu_set_t *__set);


/* Define the real names for the elements of `struct sched_param'.  */





/* Set scheduling parameters for a process.  */


//  P() {0==-1}

int sched_setparam(__pid_t __pid, const struct sched_param *__param);

/* Retrieve scheduling parameters for a particular process.  */

//  P() {0==-1}

int sched_getparam(__pid_t __pid, struct sched_param *__param);

/* Set scheduling algorithm and/or parameters for a process.  */


//  P() {0==-1}

int sched_setscheduler(__pid_t __pid, int __policy, const struct sched_param *__param);

/* Retrieve scheduling algorithm for a particular purpose.  */

//  P() {0==-1}

int sched_getscheduler(__pid_t __pid);

/* Yield the processor.  */

//  P() {0==-1}

int sched_yield(void);

/* Get maximum priority value for a scheduler.  */

//  P() {0==-1}

int sched_get_priority_max(int __algorithm);

/* Get minimum priority value for a scheduler.  */

//  P() {0==-1}

int sched_get_priority_min(int __algorithm);

/* Get the SCHED_RR interval for the named process.  */

//  P() {0==-1}

int sched_rr_get_interval(__pid_t __pid, struct timespec *__t);

/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */






/* Copyright (C) 1991-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */






/* Get size_t and NULL from <stddef.h>.  */


/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
/* A null pointer constant.  */

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
   ticks per second.  */
/* System-dependent timing definitions.  Linux version.
   Copyright (C) 1996-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <time.h> instead.
 */
/* ISO/IEC 9899:1990 7.12.1: <time.h>
   The macro `CLOCKS_PER_SEC' is the number per second of the value
   returned by the `clock' function. */
/* CAE XSH, Issue 4, Version 2: <time.h>
   The value of CLOCKS_PER_SEC is required to be 1 million on all
   XSI-conformant systems. */

/* This is the obsolete POSIX.1-1988 name for the same constant.  */
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */


/* Returned by `clock'.  */

//  P() {0==-1}

typedef __clock_t clock_t;


/* Used by other time functions.  */


/* Seconds.	[0-60] (1 leap second) */
/* Minutes.	[0-59] */
/* Hours.	[0-23] */
/* Day.		[1-31] */
/* Month.	[0-11] */
/* Year	- 1900.  */
/* Day of week.	[0-6] */
/* Days in year.[0-365]	*/
/* DST.		[-1/0/1]*/





/* Seconds east of UTC.  */
/* Timezone abbreviation.  */

//  P() {0==-1}

struct tm {
   int tm_sec;
   int tm_min;
   int tm_hour;
   int tm_mday;
   int tm_mon;
   int tm_year;
   int tm_wday;
   int tm_yday;
   int tm_isdst;
   long int __tm_gmtoff;
   const char *__tm_zone;
};


/* Time used by the program so far (user time + system time).
   The result / CLOCKS_PER_SECOND is program time in seconds.  */

//  P() {0==-1}

extern clock_t clock(void);

/* Return the current time and put it in *TIMER if TIMER is not NULL.  */

//  P() {0==-1}

extern time_t time(time_t *__timer);

/* Return the difference between TIME1 and TIME0.  */


//  P() {0==-1}

extern double difftime(time_t __time1, time_t __time0);

/* Return the `time_t' representation of TP and normalize TP.  */

//  P() {0==-1}

time_t mktime(struct tm *__tp);


/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE characters and return the number
   of characters written, or 0 if it would exceed MAXSIZE.  */



//  P() {0==-1}

size_t strftime(char *__s, size_t __maxsize, const char *__format, const struct tm *__tp);


/* Return the `struct tm' representation of *TIMER
   in Universal Coordinated Time (aka Greenwich Mean Time).  */

//  P() {0==-1}

struct tm *gmtime(const time_t *__timer);

/* Return the `struct tm' representation
   of *TIMER in the local timezone.  */

//  P() {0==-1}

extern struct tm *localtime(const time_t *__timer);


/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */

//  P() {0==-1}

char *asctime(const struct tm *__tp);

/* Equivalent to `asctime (localtime (timer))'.  */

//  P() {0==-1}

char *ctime(const time_t *__timer);

/* Defined in localtime.c.  */

//  P() {0==-1}

extern char *__tzname[2];
/* Current timezone names.  */

//  P() {0==-1}

extern int __daylight;
/* If daylight-saving time is ever in use.  */

//  P() {0==-1}

extern long int __timezone;
/* Seconds west of UTC.  */
/* Nonzero if YEAR is a leap year (every 4 years,
   except every 100th isn't, and every 400th is).  */


/* Copyright (C) 2002-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */
/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */

//  P() {0==-1}

typedef unsigned long int pthread_t;

//  P() {0==-1}

union pthread_attr_t {
   char __size[56];
   long int __align;
};


//  P() {0==-1}

typedef union pthread_attr_t pthread_attr_t;

//  P() {0==-1}

typedef struct __pthread_internal_list {
   struct __pthread_internal_list *__prev;
   struct __pthread_internal_list *__next;
} __pthread_list_t;

//  P() {0==-1}

typedef union {
   struct __pthread_mutex_s {int __lock; unsigned int __count; int __owner; unsigned int __nusers; int __kind; short __spins; short __elision; __pthread_list_t __list;} __data;
   char __size[40];
   long int __align;
} pthread_mutex_t;

//  P() {0==-1}

typedef union {
   char __size[4];
   int __align;
} pthread_mutexattr_t;

//  P() {0==-1}

typedef union {
   struct {int __lock; unsigned int __futex; unsigned long long int __total_seq; unsigned long long int __wakeup_seq; unsigned long long int __woken_seq; void *__mutex; unsigned int __nwaiters; unsigned int __broadcast_seq;} __data;
   char __size[48];
   long long int __align;
} pthread_cond_t;

//  P() {0==-1}

typedef union {
   char __size[4];
   int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */

//  P() {0==-1}

typedef unsigned int pthread_key_t;


/* Once-only execution */

//  P() {0==-1}

typedef int pthread_once_t;
/* Copyright (C) 2001-2014 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* Define the machine-dependent type `jmp_buf'.  x86-64 version.  */







/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */





//  P() {0==-1}

typedef long int __jmp_buf[8];
/* Determine the wordsize from the preprocessor defines.  */
/* Both x86-64 and x32 use the 64-bit system call interface.  */


/* Detach state.  */

//  P() {0==-1}

enum {PTHREAD_CREATE_JOINABLE, PTHREAD_CREATE_DETACHED};


/* Mutex types.  */

//  P() {0==-1}

enum {PTHREAD_MUTEX_TIMED_NP, PTHREAD_MUTEX_RECURSIVE_NP, PTHREAD_MUTEX_ERRORCHECK_NP, PTHREAD_MUTEX_ADAPTIVE_NP};
/* Mutex initializers.  */
/* Read-write lock types.  */
/* Scheduler inheritance.  */

//  P() {0==-1}

enum {PTHREAD_INHERIT_SCHED, PTHREAD_EXPLICIT_SCHED};


/* Scope handling.  */

//  P() {0==-1}

enum {PTHREAD_SCOPE_SYSTEM, PTHREAD_SCOPE_PROCESS};


/* Process shared or private flag.  */

//  P() {0==-1}

enum {PTHREAD_PROCESS_PRIVATE, PTHREAD_PROCESS_SHARED};



/* Conditional variable handling.  */



/* Cleanup buffers */


/* Function to call.  */
/* Its argument.  */
/* Saved cancellation type. */
/* Chaining of cleanup functions.  */

//  P() {0==-1}

struct _pthread_cleanup_buffer {
   void (*__routine)(void *);
   void *__arg;
   int __canceltype;
   struct _pthread_cleanup_buffer *__prev;
};

/* Cancellation */

//  P() {0==-1}

enum {PTHREAD_CANCEL_ENABLE, PTHREAD_CANCEL_DISABLE};

//  P() {0==-1}

enum {PTHREAD_CANCEL_DEFERRED, PTHREAD_CANCEL_ASYNCHRONOUS};



/* Single execution handling.  */


/* Create a new thread, starting with execution of START-ROUTINE
   getting passed ARG.  Creation attributed come from ATTR.  The new
   handle is stored in *NEWTHREAD.  */




//  P() {0==-1}

int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg);

/* Terminate calling thread.

   The registered cleanup handlers are called via exception handling
   so we cannot mark this function with __THROW.*/

//  P() {0==-1}

void pthread_exit(void *__retval);

/* Make calling thread wait for termination of the thread TH.  The
   exit status of the thread is stored in *THREAD_RETURN, if THREAD_RETURN
   is not NULL.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

//  P() {0==-1}

int pthread_join(pthread_t __th, void **__thread_return);
/* Indicate that the thread TH is never to be joined with PTHREAD_JOIN.
   The resources of TH will therefore be freed immediately when it
   terminates, instead of waiting for another thread to perform PTHREAD_JOIN
   on it.  */

//  P() {0==-1}

int pthread_detach(pthread_t __th);


/* Obtain the identifier of the current thread.  */

//  P() {0==-1}

pthread_t pthread_self(void);

/* Compare two thread identifiers.  */


//  P() {0==-1}

int pthread_equal(pthread_t __thread1, pthread_t __thread2);


/* Thread attribute handling.  */

/* Initialize thread attribute *ATTR with default attributes
   (detachstate is PTHREAD_JOINABLE, scheduling policy is SCHED_OTHER,
    no user-provided stack).  */

//  P() {0==-1}

int pthread_attr_init(pthread_attr_t *__attr);

/* Destroy thread attribute *ATTR.  */


//  P() {0==-1}

int pthread_attr_destroy(pthread_attr_t *__attr);

/* Get detach state attribute.  */



//  P() {0==-1}

int pthread_attr_getdetachstate(const pthread_attr_t *__attr, int *__detachstate);

/* Set detach state attribute.  */



//  P() {0==-1}

int pthread_attr_setdetachstate(pthread_attr_t *__attr, int __detachstate);


/* Get the size of the guard area created for stack overflow protection.  */



//  P() {0==-1}

int pthread_attr_getguardsize(const pthread_attr_t *__attr, size_t *__guardsize);

/* Set the size of the guard area created for stack overflow protection.  */



//  P() {0==-1}

int pthread_attr_setguardsize(pthread_attr_t *__attr, size_t __guardsize);


/* Return in *PARAM the scheduling parameters of *ATTR.  */



//  P() {0==-1}

int pthread_attr_getschedparam(const pthread_attr_t *__attr, struct sched_param *__param);

/* Set scheduling parameters (priority, etc) in *ATTR according to PARAM.  */



//  P() {0==-1}

int pthread_attr_setschedparam(pthread_attr_t *__attr, const struct sched_param *__param);

/* Return in *POLICY the scheduling policy of *ATTR.  */



//  P() {0==-1}

int pthread_attr_getschedpolicy(const pthread_attr_t *__attr, int *__policy);

/* Set scheduling policy in *ATTR according to POLICY.  */


//  P() {0==-1}

int pthread_attr_setschedpolicy(pthread_attr_t *__attr, int __policy);

/* Return in *INHERIT the scheduling inheritance mode of *ATTR.  */



//  P() {0==-1}

int pthread_attr_getinheritsched(const pthread_attr_t *__attr, int *__inherit);

/* Set scheduling inheritance mode in *ATTR according to INHERIT.  */



//  P() {0==-1}

int pthread_attr_setinheritsched(pthread_attr_t *__attr, int __inherit);


/* Return in *SCOPE the scheduling contention scope of *ATTR.  */



//  P() {0==-1}

int pthread_attr_getscope(const pthread_attr_t *__attr, int *__scope);

/* Set scheduling contention scope in *ATTR according to SCOPE.  */


//  P() {0==-1}

int pthread_attr_setscope(pthread_attr_t *__attr, int __scope);

/* Return the previously set address for the stack.  */



//  P() {0==-1}

int pthread_attr_getstackaddr(const pthread_attr_t *__attr, void **__stackaddr);

/* Set the starting address of the stack of the thread to be created.
   Depending on whether the stack grows up or down the value must either
   be higher or lower than all the address in the memory block.  The
   minimal size of the block must be PTHREAD_STACK_MIN.  */



//  P() {0==-1}

int pthread_attr_setstackaddr(pthread_attr_t *__attr, void *__stackaddr);

/* Return the currently used minimal stack size.  */



//  P() {0==-1}

int pthread_attr_getstacksize(const pthread_attr_t *__attr, size_t *__stacksize);

/* Add information about the minimum stack size needed for the thread
   to be started.  This size must never be less than PTHREAD_STACK_MIN
   and must also not exceed the system limits.  */



//  P() {0==-1}

int pthread_attr_setstacksize(pthread_attr_t *__attr, size_t __stacksize);
/* Functions for scheduling control.  */

/* Set the scheduling parameters for TARGET_THREAD according to POLICY
   and *PARAM.  */



//  P() {0==-1}

int pthread_setschedparam(pthread_t __target_thread, int __policy, const struct sched_param *__param);

/* Return in *POLICY and *PARAM the scheduling parameters for TARGET_THREAD. */




//  P() {0==-1}

int pthread_getschedparam(pthread_t __target_thread, int *__policy, struct sched_param *__param);

/* Set the scheduling priority for TARGET_THREAD.  */


//  P() {0==-1}

int pthread_setschedprio(pthread_t __target_thread, int __prio);
/* Functions for handling initialization.  */

/* Guarantee that the initialization function INIT_ROUTINE will be called
   only once, even if pthread_once is executed several times with the
   same ONCE_CONTROL argument. ONCE_CONTROL must point to a static or
   extern variable initialized to PTHREAD_ONCE_INIT.

   The initialization functions might throw exception which is why
   this function is not marked with __THROW.  */


//  P() {0==-1}

int pthread_once(pthread_once_t *__once_control, void (*__init_routine)(void));


/* Functions for handling cancellation.

   Note that these functions are explicitly not marked to not throw an
   exception in C++ code.  If cancellation is implemented by unwinding
   this is necessary to have the compiler generate the unwind information.  */

/* Set cancelability state of current thread to STATE, returning old
   state in *OLDSTATE if OLDSTATE is not NULL.  */

//  P() {0==-1}

int pthread_setcancelstate(int __state, int *__oldstate);

/* Set cancellation state of current thread to TYPE, returning the old
   type in *OLDTYPE if OLDTYPE is not NULL.  */

//  P() {0==-1}

int pthread_setcanceltype(int __type, int *__oldtype);

/* Cancel THREAD immediately or at the next possibility.  */

//  P() {0==-1}

int pthread_cancel(pthread_t __th);

/* Test for pending cancellation for the current thread and terminate
   the thread as per pthread_exit(PTHREAD_CANCELED) if it has been
   cancelled.  */

//  P() {0==-1}

void pthread_testcancel(void);

//  P() {0==-1}

typedef struct {
   struct {__jmp_buf __cancel_jmp_buf; int __mask_was_saved;} __cancel_jmp_buf[1];
   void *__pad[4];
} __pthread_unwind_buf_t;

/* No special attributes by default.  */





/* Structure to hold the cleanup handler information.  */

//  P() {0==-1}

struct __pthread_cleanup_frame {
   void (*__cancel_routine)(void *);
   void *__cancel_arg;
   int __do_it;
   int __cancel_type;
};
/* Install a cleanup handler: ROUTINE will be called with arguments ARG
   when the thread is canceled or calls pthread_exit.  ROUTINE will also
   be called with arguments ARG when the matching pthread_cleanup_pop
   is executed with non-zero EXECUTE argument.

   pthread_cleanup_push and pthread_cleanup_pop are macros and must always
   be used in matching pairs at the same nesting level of braces.  */


//  P() {0==-1}

void __pthread_register_cancel(__pthread_unwind_buf_t *__buf);

/* Remove a cleanup handler installed by the matching pthread_cleanup_push.
   If EXECUTE is non-zero, the handler function is called. */









//  P() {0==-1}

void __pthread_unregister_cancel(__pthread_unwind_buf_t *__buf);
/* Internal interface to initiate cleanup.  */






//  P() {0==-1}

void __pthread_unwind_next(__pthread_unwind_buf_t *__buf);


/* Function used in the macros.  */


//  P() {0==-1}

int __sigsetjmp(struct __jmp_buf_tag *__env, int __savemask);


/* Mutex handling.  */

/* Initialize a mutex.  */



//  P() {0==-1}

int pthread_mutex_init(pthread_mutex_t *__mutex, const pthread_mutexattr_t *__mutexattr);

/* Destroy a mutex.  */


//  P() {0==-1}

int pthread_mutex_destroy(pthread_mutex_t *__mutex);

/* Try locking a mutex.  */


//  P() {0==-1}

int pthread_mutex_trylock(pthread_mutex_t *__mutex);

/* Lock a mutex.  */


//  P() {0==-1}

int pthread_mutex_lock(pthread_mutex_t *__mutex);
/* Unlock a mutex.  */


//  P() {0==-1}

int pthread_mutex_unlock(pthread_mutex_t *__mutex);


/* Get the priority ceiling of MUTEX.  */




//  P() {0==-1}

int pthread_mutex_getprioceiling(const pthread_mutex_t *__mutex, int *__prioceiling);

/* Set the priority ceiling of MUTEX to PRIOCEILING, return old
   priority ceiling value in *OLD_CEILING.  */




//  P() {0==-1}

int pthread_mutex_setprioceiling(pthread_mutex_t *__mutex, int __prioceiling, int *__old_ceiling);
/* Functions for handling mutex attributes.  */

/* Initialize mutex attribute object ATTR with default attributes
   (kind is PTHREAD_MUTEX_TIMED_NP).  */


//  P() {0==-1}

int pthread_mutexattr_init(pthread_mutexattr_t *__attr);

/* Destroy mutex attribute object ATTR.  */


//  P() {0==-1}

int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr);

/* Get the process-shared flag of the mutex attribute ATTR.  */




//  P() {0==-1}

int pthread_mutexattr_getpshared(const pthread_mutexattr_t *__attr, int *__pshared);

/* Set the process-shared flag of the mutex attribute ATTR.  */



//  P() {0==-1}

int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr, int __pshared);
/* Return in *PROTOCOL the mutex protocol attribute in *ATTR.  */




//  P() {0==-1}

int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *__attr, int *__protocol);

/* Set the mutex protocol attribute in *ATTR to PROTOCOL (either
   PTHREAD_PRIO_NONE, PTHREAD_PRIO_INHERIT, or PTHREAD_PRIO_PROTECT).  */



//  P() {0==-1}

int pthread_mutexattr_setprotocol(pthread_mutexattr_t *__attr, int __protocol);

/* Return in *PRIOCEILING the mutex prioceiling attribute in *ATTR.  */




//  P() {0==-1}

int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *__attr, int *__prioceiling);

/* Set the mutex prioceiling attribute in *ATTR to PRIOCEILING.  */



//  P() {0==-1}

int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *__attr, int __prioceiling);
/* Functions for handling conditional variables.  */

/* Initialize condition variable COND using attributes ATTR, or use
   the default values if later is NULL.  */



//  P() {0==-1}

int pthread_cond_init(pthread_cond_t *__cond, const pthread_condattr_t *__cond_attr);

/* Destroy condition variable COND.  */


//  P() {0==-1}

int pthread_cond_destroy(pthread_cond_t *__cond);

/* Wake up one thread waiting for condition variable COND.  */


//  P() {0==-1}

int pthread_cond_signal(pthread_cond_t *__cond);

/* Wake up all threads waiting for condition variables COND.  */


//  P() {0==-1}

int pthread_cond_broadcast(pthread_cond_t *__cond);

/* Wait for condition variable COND to be signaled or broadcast.
   MUTEX is assumed to be locked before.

   This function is a cancellation point and therefore not marked with
   __THROW.  */



//  P() {0==-1}

int pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex);

/* Wait for condition variable COND to be signaled or broadcast until
   ABSTIME.  MUTEX is assumed to be locked before.  ABSTIME is an
   absolute time specification; zero is the beginning of the epoch
   (00:00:00 GMT, January 1, 1970).

   This function is a cancellation point and therefore not marked with
   __THROW.  */




//  P() {0==-1}

int pthread_cond_timedwait(pthread_cond_t *__cond, pthread_mutex_t *__mutex, const struct timespec *__abstime);

/* Functions for handling condition variable attributes.  */

/* Initialize condition variable attribute ATTR.  */


//  P() {0==-1}

int pthread_condattr_init(pthread_condattr_t *__attr);

/* Destroy condition variable attribute ATTR.  */


//  P() {0==-1}

int pthread_condattr_destroy(pthread_condattr_t *__attr);

/* Get the process-shared flag of the condition variable attribute ATTR.  */




//  P() {0==-1}

int pthread_condattr_getpshared(const pthread_condattr_t *__attr, int *__pshared);

/* Set the process-shared flag of the condition variable attribute ATTR.  */


//  P() {0==-1}

int pthread_condattr_setpshared(pthread_condattr_t *__attr, int __pshared);
/* Functions for handling thread-specific data.  */

/* Create a key value identifying a location in the thread-specific
   data area.  Each thread maintains a distinct thread-specific data
   area.  DESTR_FUNCTION, if non-NULL, is called with the value
   associated to that key when the key is destroyed.
   DESTR_FUNCTION is not called if the value associated is NULL when
   the key is destroyed.  */



//  P() {0==-1}

int pthread_key_create(pthread_key_t *__key, void (*__destr_function)(void *));

/* Destroy KEY.  */

//  P() {0==-1}

int pthread_key_delete(pthread_key_t __key);

/* Return current value of the thread-specific data slot identified by KEY.  */

//  P() {0==-1}

void *pthread_getspecific(pthread_key_t __key);

/* Store POINTER in the thread-specific data slot identified by KEY. */


//  P() {0==-1}

int pthread_setspecific(pthread_key_t __key, const void *__pointer);
/* Install handlers to be called when a new process is created with FORK.
   The PREPARE handler is called in the parent process just before performing
   FORK. The PARENT handler is called in the parent process just after FORK.
   The CHILD handler is called in the child process.  Each of the three
   handlers can be NULL, meaning that no handler needs to be called at that
   point.
   PTHREAD_ATFORK can be called several times, in which case the PREPARE
   handlers are called in LIFO order (last added with PTHREAD_ATFORK,
   first called before FORK), and the PARENT and CHILD handlers are called
   in FIFO (first added, first called).  */




//  P() {0==-1}

int pthread_atfork(void (*__prepare)(void), void (*__parent)(void), void (*__child)(void));






//  P() {0==-1}

void *thr1(void *arg);


//  P() {0==-1}

int main();
