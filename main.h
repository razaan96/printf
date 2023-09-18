#ifndef HEADER_H
#define HEADER_H

/* C standard library header files */
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/* function prototypes */
int putchr(char c);
int  _printf(const char *format, ...);
int put_s(char *string);
int put_int(int integer);
int my_puts(char *string);
int getint(int number);

#endif /* HEADER_H */
