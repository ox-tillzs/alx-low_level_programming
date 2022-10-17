#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Write a program that prints
 * in quotes and evalutaing
 * Return: Always 0 success
 */

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	if (num != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
