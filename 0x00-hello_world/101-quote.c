#include <stdio.h>
 /**
  * main - prints "and that piece of art is useful\" - Dora Korpar,
  * 2015-10-19."
  * Description: file that prints text
  * Return: Exit code 1
 */

int main(void)
{
	fwrite(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			59);
	return (1);
}
