#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main Entry point
 * Description: 'program
 * in quotes.'
 * Return: Always n0 (success)
 */

int main(void)
{
	int num;
	char low;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (low = 'a' ; low <= 'f' ; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
