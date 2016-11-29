dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.63)
AC_INIT(gpcd-support, 1.0.0, ovis-help@sandia.gov)
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([gpcd/gpcd_lib.c])
AC_CONFIG_AUX_DIR(config)
AC_CONFIG_SUBDIRS([gpcd])
AM_INIT_AUTOMAKE([foreign])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])
AM_CONFIG_HEADER(config.h)
AC_SUBST(ac_configure_args)

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
