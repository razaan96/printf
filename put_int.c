#include "main.h"
#include <unistd.h>
/**
* put_int - print an integer
* @in: The integer to print
* Return: The number of characters printed
*/
int put_int(int in)
{
int count = 0;
int reversed = 0;
if (in < 0)
{
write(1, "-", 1);
count++;
in = -in;
}
if (in == 0)
{
write(1, "0", 1);
return (1);
}
while (in > 0)
{
reversed = reversed * 10 + (in % 10);
in /= 10;
count++;
}
while (reversed > 0)
{
char digit = '0' + (reversed % 10);
write(1, &digit, 1);
reversed /= 10;
count++;
}
return (count);
}
