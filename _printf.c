#include "main.h"
/**
*_printf - a function print formatted text to output
*@format: The format string
*Return: The number of characters and bytes printed
*@...:Additional argument
*/
int _printf(const char *format, ...)
{
va_list args;
int i, char_count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
putchr(format[i]); }
else if (format[i] == '%' && format[i + 1] == 'c')
{
putchr(va_arg(args, int));
i++; }
else if (format[i] == '%' && format[i + 1] == 's')
{
char *str;
str = va_arg(args, char *);
if (!str)
{
str = "(null)";
char_count += (put_s(str) - 1);
i++; }
else
{
int leng = put_s(str);
i++;
char_count += (leng - 1); }}
else if (format[i] == '%' && format[i + 1] == '%')
{
putchr(37);
i++; }
else if (format[i + 1] == 'd' || format[i + 1] == 'i')
{
int leng = va_arg(args, int);
char_count += (put_int(leng) - 1);
i++; }
char_count += 1; }
va_end(args);
return (char_count); }
