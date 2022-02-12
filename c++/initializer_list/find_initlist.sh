#!/bin/bash

find / -type f -name "initializer*" |xargs cat > source.cpp

# 找initializer*的源码,在这之前已经执行过查看具体有多少文件了