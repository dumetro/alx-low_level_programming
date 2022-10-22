#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int hx, idx;

	if (size > 0)
	{
		for (hx = 1; hx <= size; hx++)
		{
			for (idx = size - hx; idx > 0; idx--)
				_putchar(' ');
			for (idx = 0; idx < hx; idx++)
				_putchar('#');
			if (hx == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
