#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: the program prints the hexidecimal number of a base of number
 * evaulating some conditions
 * Return: Always 0 for success
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
