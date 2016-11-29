# Set topdir to be builddir/rpm
# note this is intentionally ignored by rpmbuild. must use
# commandline syntax to get this effect.
#% define _topdir %(echo $PWD)/toss
# do not set unfascist build
#%-define _unpackaged_files_terminate_build 0
#%-define _missing_doc_files_terminate_build 0

%define ldms_all System Environment/Libraries

%if 0%{?rhel} && 0%{?rhel} <= 6
%{!?__python2: %global __python2 /opt/python-2.7/bin/python}
%{!?python2_sitelib: %global python2_sitelib %(%{__python2} -c "from distutils.sysconfig import get_python_lib; print(get_python_lib())")}
%{!?python2_sitearch: %global python2_sitearch %(%{__python2} -c "from distutils.sysconfig import get_python_lib; print(get_python_lib(1))")}
%endif

%if 0%{?suse_version} > 0
%global _defaultdocdir %{_usr}/share/doc
%endif

# Main package
Summary: Cray GPCD Support Library for OVIS
Name: gpcdlocal
Version: 1.0.0
Release: trinity_rhine_node%{?dist}
License: GPLv2
Group: %{ldms_all}
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
Source: %{name}-%{version}.tar.gz
Requires: rpm >= 4.8.0
BuildRequires: gcc gettext-tools
Url: http://ovis.ca.sandia.gov/

Prefix: /usr


%description
This package provides the GPCD query support libraries.
* libgpcdlocal


%prep
%setup -q

%build
echo bTMPPATH %{_tmppath}
rm -rf $RPM_BUILD_ROOT
echo bBUILDROOT $RPM_BUILD_ROOT
./configure --prefix=%{_prefix} --libdir=%{_libdir}
make

%install
echo TMPPATH %{_tmppath}
echo BUILDROOT $RPM_BUILD_ROOT
make DESTDIR=${RPM_BUILD_ROOT} V=1 install
# remove unpackaged files from the buildroot
rm -f $RPM_BUILD_ROOT%{_libdir}/*.la
# fix in subsequent after sorting use of sysconfdir or share/baler in baler
mv $RPM_BUILD_ROOT%{_docdir}/* $RPM_BUILD_ROOT%{_docdir}/%{name}-%{version}/

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%{_libdir}/*
%{_docdir}/%{name}-%{version}/COPYING
%{_docdir}/%{name}-%{version}/ChangeLog
%{_docdir}/%{name}-%{version}/AUTHORS 
%{_docdir}/%{name}-%{version}/README
#end core

# devel
%package devel
Summary: GPCD local devel package
Group: %{ldms_grp}
Requires: gpcdlocal
%description devel
This is the headers for gpcdlocal.

%files devel
%defattr(-,root,root)
%{_includedir}/*/*.h
#end devel

%package test
Summary: LDMS test package
Group: %{ldms_grp}
Requires: gpcdlocal
%description test
This is a collection of test programs for (gpcdlocal).

%changelog
* Tue Feb 16 2016 Ben Allan <baallan@sandia.gov> 1.0
for Cray SLES 12 compute node.
