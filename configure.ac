AC_INIT([wmfire], [1.2.4])
AC_CONFIG_SRCDIR([src/wmfire.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE

AC_PROG_AWK
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_LN_S

PKG_CHECK_MODULES([X11], [x11])
PKG_CHECK_MODULES([XEXT], [xext])

AC_CHECK_LIB(m,sincos)

AC_HEADER_DIRENT
AC_HEADER_SYS_WAIT
AC_CHECK_HEADERS(unistd.h)

AC_C_CONST

AC_ARG_ENABLE(header, [
Wmfire options:
])

AC_ARG_ENABLE(session,
[  --enable-session                Compile with session management],
       session=on, session=off)

if test "x$session" = "xon" ; then
  AC_DEFINE([SESSION], [], [Compile with session management])

  PKG_CHECK_MODULES([SM], [sm])
  PKG_CHECK_MODULES([ICE], [ice])
fi
AM_CONDITIONAL(SESSION, test "x$session" = "xon")

PKG_CHECK_MODULES([GTK2],[gtk+-2.0],[
  GTK2_LIBS=`echo "$GTK2_LIBS" | sed -e "s/-lgtk-x11-2.0//g" -e "s/-latk-1.0//g"`
])

PKG_CHECK_MODULES([GTOP],[libgtop-2.0])

AC_CHECK_FUNCS([floor    \
                memset   \
                strchr   \
                strdup   \
                strerror \
                strstr])

AC_TYPE_SIZE_T
AC_TYPE_UINT64_T

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
