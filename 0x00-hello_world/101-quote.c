#include <stdio.h>
 /**
  * main - prints "and that piece of art is useful\" - Dora Korpar,
  * 2015-10-19."
  * Description: prints the above text
  * Return: Always 1 success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59);
	return (1);
}
