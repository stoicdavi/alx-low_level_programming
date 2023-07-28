#include "main.h"
#include <stdio.h>

/**
  * print_line - prints s bytes of a buffer
  * @c: buffer to be printed
  * @s: bytes of buffer to print
  * @l: line of buffer to print
  *
  * Return: void
  */
void print_line(char *c, int s, int l)
{
	int t, k;

	for (t = 0; t <= 9; t++)
	{
		if (t <= s)
			printf("%02x", c[l * 10 + t]);
		else
			printf("  ");
		if (t % 2)
			putchar(' ');
		{
			for (k = 0; k <= s; k++)
			{
				if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
					putchar(c[l * 10 + k]);
				else
					putchar('.');
			}
		}
	}
}
/**
 * print_buffer - a function that prints the buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m;

	for (m = 0; m <= (size - 1) / 10 && size; m++)
	{
		printf("%08x: ", m * 10);
		if (m < size / 10)
		{
			print_line(b, 9, m);
		}
		else
		{
			print_line(b, size % 10 - 1, m);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
