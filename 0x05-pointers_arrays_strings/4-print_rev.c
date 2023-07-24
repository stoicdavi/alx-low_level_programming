#include "main.h"
/**
  * print_rev - print in reverse
  * @s: string being printed in reverse
  * Retutn: returns void
  */
void print_rev(char *s)
{
	int b = 0;
	int l;

	while (s[b] != '\0')
	{
		b++;
	}
	for (l = b - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	b--;
	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}
