#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'what the program those
 * in quotes.'
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
	{
		putchar(low);
		printf("\n");
	}
	return (0);
}
