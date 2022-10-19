#include "main.h"

/**
*print_sign - int print_sign(int n)
*@n: print a program that shows the sign of numbers
*
*Return: 1 if when greater, 0 when 0 and -1 when less
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (n);
}
