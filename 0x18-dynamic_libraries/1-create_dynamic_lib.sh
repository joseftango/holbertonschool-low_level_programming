#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fpic | gcc -Wall -pedantic -Werror -Wextra *.o -shared -o liball.so
