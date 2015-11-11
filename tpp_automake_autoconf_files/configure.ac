#configure.ac - info-file for autoconf
#
#This file is part of teampcphone.
#
#Copyright (C) 2015  Dario Dorando
#
#teampcphone is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, either version 3 of the License, or
#(at your option) any later version.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program.  If not, see <http://www.gnu.org/licenses/>.

AC_PREREQ([2.68])
AC_INIT(telephone-interface, 0.1, dariodorando@gmail.com)
AC_CONFIG_SRCDIR([tmp.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_CPP
AC_PROG_MAKE_SET
INTI_REQUIRED_VERSION=1.0.7
PKG_CHECK_MODULES(INTI, inti-1.0 >= $INTI_REQUIRED_VERSION)

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE
AC_TYPE_PID_T
AC_TYPE_SIZE_T

# Checks for library functions.
AC_CHECK_FUNCS([memmove])

AC_OUTPUT(Makefile src/Makefile src/lib/Makefile src/fw/Makefile src/software/Makefile)
