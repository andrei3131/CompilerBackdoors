@c defs.inc                         -*- texinfo -*-
@c Common and build specific constants for the manuals.
@c This file has been created by mkdefsinc.

@ifclear defsincincluded
@set defsincincluded 1


@c Flags

@set gpgtwohack 1


@c Directories

@set BINDIR         /usr/local/bin
@set LIBEXECDIR     /usr/local/libexec
@set LIBDIR         /usr/local/lib/gnupg
@set DATADIR        /usr/local/share/gnupg
@set SYSCONFDIR     /usr/local/etc/gnupg
@set LOCALSTATEDIR  /usr/local/var
@set LOCALCACHEDIR  /usr/local/var/cache/gnupg
@set LOCALRUNDIR    /usr/local/var/run/gnupg
@set SYSCONFSKELDIR /usr/local/etc/skel/.gnupg

@c Version information a la version.texi

@set UPDATED 11 May 2017
@set UPDATED-MONTH May 2017
@set EDITION 2.1.21
@set VERSION 2.1.21

@c Algorithm defaults

@set GPGSYMENCALGO AES-128

@c Macros

@macro gpgname
gpg2
@end macro
@macro gpgvname
gpgv2
@end macro

@end ifclear

@c Local Variables:
@c buffer-read-only: t
@c End:
