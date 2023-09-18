#include "main.h"
/**
*my_puts- function
*@string:parameter
*Return: always 0
*/
int my_puts(char *string)
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
putchr('\n');

return (r_val);
}
