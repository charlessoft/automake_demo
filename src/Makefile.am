AUTOMAKE_OPTIONS=foreign
SUBDIRS=dohello dohaha easylogger #本目录的直接下级目录dohello需要编译
bin_PROGRAMS=hello #本目录的文件编译成可执行文件hello。如有多个，用空格分开。然后在下面分别写它们的SOURCE和LDADD。
AM_CPPFLAGS= \
		    -O0 -g3 -Wall \
		   -I./dohello \
		   -I./dohaha \
		   -I./easylogger/inc \
		   -I./easylogger/plugins/file

hello_SOURCES=test.cpp  





# easylogger/src/elog.c \
# easylogger/src/elog_async.c \
# easylogger/src/elog_buf.c \
# easylogger/src/elog_utils.c \
# easylogger/port/elog_port.c \
# easylogger/plugins/file/elog_file.c \
# easylogger/plugins/file/elog_file_port.c 





# easylogger/port/elog_file_port.c 

#编译hello需要的源文件列表，如有多个，用空格分开。
# hello_LDADD=dohello/libhello.a \
# 			dohaha/libhaha.a \
# 			-lpthread


hello_LDADD=dohello/libhello.a \
			dohaha/libhaha.a \
			easylogger/libeasylogger.a  \
			-lpthread




#编译hello需要的库文件列表。如有多个，用空格分开。
