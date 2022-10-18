#include "main.h"

/**
*print_alphabet_x10 - Print the alphabet 10 times
*/

void print_alphabet_x10(void)
{
	int alp;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alp = 'a' ; alp <= 'z' ; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
