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
unsigned int i, char_count = 0;
if (!format || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
putchr(format[i]);
char_count++;
}
else if (format[i] == '%' && format[i + 1] == 'c')
{
<<<<<<< HEAD
putchr(va_arg(args, int));
i += 1;
=======
char c = va_arg(args, int);
putchr(c);
char_count++;
i++;
>>>>>>> 18e419d932effd27d25e7b7766fb7ebdfa337575
}
else if (format[i] == '%' && format[i + 1] == 's')
{
<<<<<<< HEAD
int leng = put_s(va_arg(args, char *));
i += 1;
char_count += (leng - 1);
=======
char *str = va_arg(args, char *);
if (str)
char_count += put_s(str);
else
char_count += put_s("(null)");
i++;
>>>>>>> 18e419d932effd27d25e7b7766fb7ebdfa337575
}
else if (format[i] == '%' && format[i + 1] == '%')
{
putchr('%');
<<<<<<< HEAD
i += 1;
=======
char_count++;
i++;
>>>>>>> 18e419d932effd27d25e7b7766fb7ebdfa337575
}
}
va_end(args);
return (char_count);
}
