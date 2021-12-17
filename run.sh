#!/bin/bash
# autoscan
# 修改configure.scan 改名configure.as

autoconf;aclocal;automake --add-missing



# clean
# aclocal.m4 autom4te.cache autoscan.log config.log
