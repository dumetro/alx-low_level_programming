#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a:First argument to be swapped.
 * @b:second argument to be swapped.
 * Return: void-no value returned.
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;

	*b = p;
}
