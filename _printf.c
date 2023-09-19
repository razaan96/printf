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
unsigned int char_count, pfret = 0, i;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format && format[i] != '\0'; i++)
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
else if (format[i + 1] == 'd' || format[i + 1] == 'i')
{
char_count += putchr(va_arg(args, int));
i++;
pfret += (char_count - 1);
putchr('%');
}
pfret += 1;
}
va_end(args);
return (pfret);
}
