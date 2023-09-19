#include "main.h"
/**
*_printf - a function print formatted text to output
*Return: The number of characters and bytes printed
*@format: The format string
*@...: Additional arguments
*/
int _printf(const char *format, ...)
{
va_list args;
int i, char_count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
putchr(format[i]);
char_count++;
}
else if (format[i] == '%' && format[i + 1] == 'c')
{
char c = va_arg(args, int);
putchr(c);
char_count++;
i++;
}
else if (format[i] == '%' && format[i + 1] == 's')
{
char *str = va_arg(args, char *);
if (*str)
{
char_count += put_s(str);
i++;
}
else
{
char_count += put_s("(null)");
i++;
}
}
else if (format[i] == '%' && format[i + 1] == '%')
{
putchr('%');
char_count++;
i++;
}
}
va_end(args);
return (char_count);
}
