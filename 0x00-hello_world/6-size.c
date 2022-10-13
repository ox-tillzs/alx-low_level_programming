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

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lu));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
