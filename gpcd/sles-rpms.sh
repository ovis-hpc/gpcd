#!/bin/sh
./autogen.sh
./configure
make dist
mkdir -p rhine/{BUILD,RPMS,SOURCES,SPECS,SRPMS}
cp gpcd-rhine.spec rhine/SOURCES
cp gpcdlocal-1.0.0.tar.gz rhine/SOURCES
rpmbuild --define "_topdir `pwd`/rhine" -ba gpcd-rhine.spec

