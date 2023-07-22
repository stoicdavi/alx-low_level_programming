#include "main.h"
/**
  * print_square - function to print the square
  *
  * @size: The size of the square
  */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; size != 0; size++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
