#include "main.h"
/**
  * print_diagonal - to print the ouput the diagnal line
  *
  * @n: the the value of the line
  *
  *
  */
void print_diagonal(int n)
{
	int a, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (c = 0; c < a; c++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
