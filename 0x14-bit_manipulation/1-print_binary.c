#include "main.h"
/**
 * print_binary - fuction to print binary representation of a num
 * @n: then number to be converted to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}

