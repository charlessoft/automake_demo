AUTOMAKE_OPTIONS=foreign
AM_CPPFLAGS= \
			 -I./inc \
			 -I./plugins/file

			 
noinst_LIBRARIES=libeasylogger.a   #本目录下的代码编译成libhello.a库。不需要发布。如果需要发布，则写成bin_LIBRARIES。注意，库的名称格式必需为 libxxx.a。因为编译静态库，configure.in需要定义AC_PROG_RANLIB宏。
libeasylogger_a_SOURCES=\
						./src/elog.c \
						./src/elog_async.c \
						./src/elog_buf.c \
						./src/elog_utils.c \
						./port/elog_file_port.c \
						./port/elog_port.c \
						./plugins/file/elog_file.c \
						./plugins/file/elog_file_port.c 
