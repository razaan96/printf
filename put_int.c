#include "main.h"
#include <unistd.h>
/**
 * put_int - print an integer
 * @in: input number
 * Return: The number of characters printed
 */

int put_int(int in)
{
	int count = 0;

	if (in < 0)

	{
		write(1, "-", 1);
		count++;
	}
	if (in == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (count);
}

