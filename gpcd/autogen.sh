#!/bin/sh
if test -f gpcd_pub.h ; then
	touch config/config.rpath
	autoreconf --force --install -v -I m4
else
	echo "this script for regenerating build system of gpcd support. cannot find gpcd headers."
	exit 1
fi

