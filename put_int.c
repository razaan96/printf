#include "main.h"
#include <unistd.h>
/**
* put_int - print an integer
* @in: The integer to print
* Return: The number of characters printed
*/
int put_int(int in)
{
int i = 0;
if (in < 0)
{
i += putchr('-');
in = -in;
}
if (in / 10 != 0)
{
i += put_int(in / 10);
}
i += putchr('0' + (in % 10));
return (i);
}
