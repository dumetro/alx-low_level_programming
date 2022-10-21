#include <stdio.h>

/**
 * main - searches and prints the largest primeNum
 * factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long primeNum = 612852475143, dby;

	while (dby < (primeNum / 2))
	{
		if ((primeNum % 2) == 0)
		{
			primeNum /= 2;
			continue;
		}

		for (dby = 3; dby < (primeNum / 2); dby += 2)
		{
			if ((primeNum % dby) == 0)
			primeNum /= dby;
		}
	}
	printf("%ld\n", primeNum);
	return (0);
}
