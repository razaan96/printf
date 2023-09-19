#ifndef MAIN_H_
#define MAIN_H_

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

#endif
