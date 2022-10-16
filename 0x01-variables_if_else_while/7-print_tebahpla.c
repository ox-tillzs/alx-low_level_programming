#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'what does the program'
 * print in quotes.'
 * Return: Always 0 (success)
 */

int main(void)
{
	int rev;

	for (rev = 'z' ; rev >= 'a' ; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
