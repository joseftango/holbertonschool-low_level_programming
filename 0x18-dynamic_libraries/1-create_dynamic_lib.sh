#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c -fpic | gcc *.o -o liball.so
