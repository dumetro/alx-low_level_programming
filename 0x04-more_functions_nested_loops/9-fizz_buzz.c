#include <stdio.h>

/**
 * main - print the numbers from 1-100, for multiples of three,
 * print the word Fizzr, for multiples of five,
 * print the word Buzz, for multiples of three and five print FizzBuzz.
 * Return: Always 0.
 */

int main(void)
{

	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
	if (num == 100)
		continue;
	printf(" ");
	}

	printf("\n");
	return (0);
}
