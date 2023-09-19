#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_printf - a function print formatted text to output
*Return:the number of characters, bytes and numbers printed
*@format: parameter
*@...:argument
*/
int _printf(const char *format, ...)
{
va_list args;
unsigned int i, char_count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
putchr(format[i]);
}
else if (format[i] == '%' && format[i + 1] == 'c')
{
putchr(va_arg(args, int));
i++;
}
else if (format[i] == '%' && format[i + 1] == 's')
{
int leng = put_s(va_arg(args, char *));
i++;
char_count += (leng - 1);
}
else if (format[i] == '%' && format[i + 1] == '%')
{
putchr('%');
i++;
}
char_count += 1;
}
va_end(args);
return (char_count);
}
