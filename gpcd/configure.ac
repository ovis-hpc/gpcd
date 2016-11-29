#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([gpcdlocal], [1.0.0], [ovis-help@sandia.gov])
AC_PROG_CC
AC_CONFIG_AUX_DIR(config)
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([gpcd_lib.c])
AC_CONFIG_MACRO_DIR([m4])
AM_PROG_LIBTOOL
AC_LIB_RPATH


# Checks for programs.

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h stdint.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([bzero])

AC_OUTPUT(Makefile gpcdlocal.sh)
