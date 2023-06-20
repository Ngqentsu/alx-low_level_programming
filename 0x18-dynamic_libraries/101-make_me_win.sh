#!/bin/bash
cp /bin/ls /tmp/evil && echo 'int printf(const char *format, ...) { return 0; }' > /tmp/evil.c && gcc -shared -o /tmp/evil.so /tmp/evil.c && export LD_PRELOAD=/tmp/evil.so
