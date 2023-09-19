#include "main.h"
/*
 * _pencil - a print function
 * @format: The format string
 * Return: The number of characters or bytes printed
 */
int _printf_int(const char *format, ...)
{
	va_list args;
	unsigned int i, char_count = 0;

	if (!format)

		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchr(format[i]);
			char_count++;
		}
		else if (format[i] == '%' && format[i + 1])
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				int num = va_arg(args, int);

				char_count += put_int(num);
				i++;
			}
		}
	}
	va_end(args);
	return (char_count);
}
