#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'what the program prints'
 * in quotes.'
 * Return: Always 0 (scuccess)
 */

int main(void)
{
	char low;
	char e = 'e';
	char q = 'q';

	for (low = 'a' ; low <= 'z' ; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');
	return (0);
}
