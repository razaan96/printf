#include "main.h"
/**
*getint - function
*@number:parameter
*Return: always 0
*/
void getint(int number)
{
int n;

if (number == 0)
return;

n = number / 10;

getint(n);
putchr(number % 10 + '0');

	return;
}
