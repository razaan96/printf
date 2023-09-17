#include "main.h"
/**
*_printf - program
*Return:0
*@format:parameter
*@...:argument
*/
int _printf(const char *format, ...)
{
va_list args;
int char_count = 0;
va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
char_count++;
}
else
{
format++;
if (*format == '\0')
break;
if (*format == '%')
{
write(1, format, 1);
char_count++; }
else if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
char_count++; }
else if (*format == 's')
{
char *str = va_arg(args, char*);
int i = 0;
while (str[i] != '\0')
i++;
write(1, str, i);
char_count += i;
}}
format++; }
va_end(args);
return (char_count); }
