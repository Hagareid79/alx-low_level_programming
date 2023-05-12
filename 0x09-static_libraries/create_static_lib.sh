#!/bin/bash
gcc -well -pedantic -werror -wextra -c *.c
ar rc liball.a *.o
