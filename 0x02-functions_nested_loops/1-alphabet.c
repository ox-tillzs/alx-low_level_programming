#include "main.h"

/**
*main - Entry point
*Description: using _putchar to print lowercase alphabet
*
*Return: Always 0 success
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
