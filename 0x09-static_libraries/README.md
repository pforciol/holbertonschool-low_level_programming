# 0x09 - C - Static libraries

At the end of this project, I am expected to be able to explain to anyone, without the help of Google:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of `ar`, `ranlib`, `nm`
	___

## `create_static_lib.sh` script

### Usage
Run the script `create_static_lib.sh` to create a static library called `liball.a` from all the `.c` files that are in the current directory.

```Shell
pierre@ubuntu:  ~/0x09. Static Librairies$ ls *.c
0-isupper.c  0-strcat.c   1-isdigit.c  1-strncat.c  2-strlen.c   3-islower.c  3-strcmp.c
4-isalpha.c  5-strstr.c   9-strcpy.c   _putchar.c   0-memset.c   100-atoi.c   1-memcpy.c
2-strchr.c   2-strncpy.c  3-puts.c     3-strspn.c   4-strpbrk.c  6-abs.c
```

```Shell
pierre@ubuntu:  ~/0x09. Static Librairies$ ./create_static_lib.sh
```

```Shell
pierre@ubuntu:  ~/0x09. Static Librairies$ ls *.a liball.a
```

```Shell
pierre@ubuntu:  ~/0x09. Static Librairies$ ar -t liball.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
5-strstr.o
6-abs.o
9-strcpy.o
_putchar.o
```
