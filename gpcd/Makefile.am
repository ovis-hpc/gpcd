ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -g -Wall -fPIC  -I./aries -Wfatal-errors 
lib_LTLIBRARIES = libgpcdlocal.la
libgpcdlocal_la_SOURCES = gpcd_lib.c gpcd_lib.h gpcd_pub.h
pkginclude_HEADERS = gpcd_lib.h gpcd_pub.h gpcd_lib_gem_mmrs.h

EXTRA_DIST = aries gpcd-rhine.spec

install-data-local:
	$(MKDIR_P) $(DESTDIR)$(docdir)
	for f in AUTHORS README COPYING ChangeLog ; do \
		$(INSTALL_DATA) ${srcdir}/$$f $(DESTDIR)$(docdir); \
	done

MAINTAINERCLEANFILES = aclocal.m4
maintainer-clean-local:
	$(RM) -rf rhine autom4te.cache aclocal.m4 \
Makefile.in \
config/config.guess \
config/config.sub \
config/depcomp \
config/install-sh \
config/ltmain.sh \
config/missing \
configure \
@PACKAGE_NAME@-@VERSION@.tar.gz \
m4/libtool.m4 \
m4/ltoptions.m4 \
m4/ltsugar.m4 \
m4/ltversion.m4 \
m4/lt~obsolete.m4


libgpcdlocal_la_SOURCES += gpcd_lib_ari_names.h  gpcd_lib_gem_mmrs.h  gpcd_lib_gem_names.h

