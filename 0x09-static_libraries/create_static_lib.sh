#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
