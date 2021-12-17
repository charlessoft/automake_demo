AC_PREREQ(2.61)
AC_INIT(hello,1.0)   #软件包名称和版本号,另一种写法是写在AM_INIT_AUTOMAKE中.
AC_CONFIG_SRCDIR([src/test.cpp])
#AC_CONFIG_HEADER([config.h])
# AM_INIT_AUTOMAKE
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_RANLIB       #使用了静态库编译,需要此宏定义

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

#AC_CONFIG_FILES([src/Makefile src/dohello/Makefile])
AC_OUTPUT(Makefile 
          src/Makefile 
          src/dohello/Makefile 
          src/dohaha/Makefile 
          src/easylogger/Makefile)
