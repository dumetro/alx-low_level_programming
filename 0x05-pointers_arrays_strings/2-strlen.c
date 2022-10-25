#include "main.h"

/**
 * _strlen - computes the length of a string.
 * @s:String pointer to the computed str_len.
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
