#!/bin/bash
gcc -c *.c -fpic && gcc *.o -o liball.so
