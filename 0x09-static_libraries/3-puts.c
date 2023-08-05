#include "main.h"
/**
  * _puts - fuction to print string and a new line
  * @s: the string to be printed
  */
void _puts(char *s)
{

	int b;

	b = 0;
	for (; s[b] != '\0'; b++)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
