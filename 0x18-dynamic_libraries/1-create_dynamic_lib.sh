#!/bin/bash
gcc -Wall -waxtra -werror -pedantic -c -fPIC -c *.c
gcc -shared -o liball.so *.o
