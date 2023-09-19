#include "main.h"
#include <unistd.h>
/**
*put_s - function print a string
*@string: the string
*Return: the number of character printed
*/
int put_s(char *string)
{
int i, count = 0;

if (string)
{
while (string[count] != '\0')
{
count++;
}
for (i = 0; i < count; i++)
putchr(string[i]);
}

return (count);
}
