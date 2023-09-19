#include "main.h"
/**
*_printf - program
*Return:the number of characters printed
*@format:parameter
*@...:argument
*/
int _printf(const char *format, ...)
{
va_list args;
unsigned int pret = 0, i, char_count = 0;
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
else
{
putchr('%');
}
pret += 1;
}
va_end(args);
return (pret);
}
