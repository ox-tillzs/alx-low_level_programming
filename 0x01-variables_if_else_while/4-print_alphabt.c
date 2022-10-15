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
	char null1 = 'e';
	char null2 = 'q';

	for (low = 'a' ; low <= 'z' ; low++)
	{
		if (low != null1 && low != null2)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
