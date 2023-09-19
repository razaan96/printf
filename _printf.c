#include "main.h"
/**
*_printf - a function print formatted text to output
*@format: The format string
*Return: The number of characters and bytes printed
*/
int _printf(const char *format, ...)
{
va_list args;
int i, char_count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
putchr(format[i]);
}
else if (format[i] == '%' && format[i + 1])
{
i++;
if (format[i + 1] == 'c')
{
char c = va_arg(args, int);
putchr(c);
}
else if (format[i + 1] == 's')
{
char *str = va_arg(args, char *);
if (str == NULL || *str == '\0')
str = "(null)";
char_count += put_s(str);
}
else if (format[i + 1] == '%')
{
putchr('%');
}
else if (format[i + 1] == 'd' || format[i + 1] == 'i')
{
int num = va_arg(args, int);
char_count += put_int(num);
}
}
}
va_end(args);
return (char_count);
}
