#include "main.h"
/**
*put_s - function
*@string:the string
*Return: 0 the rvalue
*/
int put_s(char *string)
{
int indx = 0, r_val = 0;

if (string)
{
while (string[indx] != '\0')
{
putchr(string[indx]);
r_val += 1;
indx++;
}
}
return (r_val);
}
