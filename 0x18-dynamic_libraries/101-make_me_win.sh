#!/bin/bash
wget -P /tmp https://github.com/faithful1ofall/alx-low_level_programming/raw/master/0x18-dynamic_libraries/Fwin.so
export LD_PRELOAD=/tmp/Fwin.so
