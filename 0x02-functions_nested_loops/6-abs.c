#include "main.h"

/**
*_abs - printing integers in absolute value
*@n: recalled back
*Return: n otherwise n-1
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
