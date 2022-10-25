#include "main.h"

/**
* swap_int - swaps the values
*@a: pointer to a
*@b: ponter to b
*Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
