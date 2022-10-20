#include "main.h"

/**
* print_times_table - Prints the n times table
*
* @n: number times table (from 0 to 15)
*/


void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
	_putchar('0');
	for (b = 1; b <= n; b++)
	{
		op = a * b;
		_putchar('0');
		_putchar('0');
		if (op <= 9)
		{
		_putchar('0');
		_putchar('0');
		_putchar(op + '0');
		}
		else if (op <= 99)
		{
		_putchar('0');
		_putchar((op / 10) + '0');
		_putchar((op % 10) + '0');
		}
		else
		{
		_putchar(((op / 100) % 10) + '0');
		_putchar(((op / 10) % 10) + '0');
		_putchar((op % 10) + '0');
		}
	}
	_putchar('\n');
	}
	}

}
