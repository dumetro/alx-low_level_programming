#include "main.h"

/**
 * print_square - prints a square using the character #.
 * @size: size of the square.
 */

void print_square(int size)
{
	int hgt, brdth;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (brdth = 0; brdth < size; brdth++)
				_putchar('#');
			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}
		_putchar('\n');
}
