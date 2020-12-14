#!/bin/bash
wget -P /tmp -q
"https://github.com/pforciol/holbertonschool-low_level_programming/tree/master/0x18-dynamic_libraries/libmmw.so"
LD_PRELOAD=/tmp/libmmw.so
