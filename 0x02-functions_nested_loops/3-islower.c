#include "main.h"

/**
*_islower - check if it print lowercase letters
*@c:in quotes @ ASCII
*Return: 1 if lower than c otherwise 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
