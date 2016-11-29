This project provides gpcd query library support (in various versions)
derived from Cray open source information.

The gpcd/ directory provides initial support for aries interconnects on XC.
Other subdirectories may come along later to handle incompatible changes as
the Cray information and platforms evolve.

Build:

To make SLES rpms:

	cd gpcd; ./sles-rpms.sh

The resulting rpms are relocatable.

What you get:

/usr/lib64/libgpcdlocal.so

/usr/include/gpcdlocal/*.h

If you use /usr as the default prefix.
