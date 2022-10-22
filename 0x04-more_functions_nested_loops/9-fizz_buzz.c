#include <stdio.h>

/**
 * main - print the numbers from 1-100, for multiples of three,
 * print the word Fizzr, for multiples of five,
 * print the word Buzz, for multiples of three and five print FizzBuzz.
 * Return: Always 0.
 */

int main(void)
{

	int num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		printf(" ");
		num++;
	}

	printf("\n");
	return (0);
}
