#!/bin/bash
Wget -P .. https://raw.githubusercontent.com/Ify01/alx-low_level_programming/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
