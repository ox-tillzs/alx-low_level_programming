#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'what the program does'
 * in quotes.'
 * Return: Always 0 (success)
 */

int main(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
