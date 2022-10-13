#include <stdio.h>

/**
 * main - Entry point
 * Description: 'this program prints the
 * strings in quotes.'
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long lu;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lu));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
