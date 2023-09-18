#include "main.h"
/**
*put_s - function print string
*@string:the string
*Return: 0 thecount
*/
int put_s(char *string)
{
int count = 0;

if (string)
{
for (count = 0; string[count] != '\0'; count++)
{
putchr(string[count]);
}
}
return (count);
}
