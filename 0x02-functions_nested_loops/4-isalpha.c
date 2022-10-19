#include "main.h"

/**
*_isalpha - printing function that checks for alphabetic character
*@c: letters, uppercase and lowercase @ASCII
*Return: 1 if it is true and return 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
