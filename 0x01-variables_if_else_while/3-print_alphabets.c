#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'what this program those
 * in quotes.'
 * Return: Always 0 (success)
 */

int main(void)
{
	int low;
	int high;

	for (low = 'a' ; low <= 'z' ; low++)
	{
		putchar(low);
	}
	for (high = 'A' ; high <= 'Z' ; high++)
	{
		putchar(high);
	}
	putchar('\n');
	return (0);
}
