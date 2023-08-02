#include "main.h"
/**
  * _puts_recursion - function to output the string
  * Return: 0 for every success
  * @s: the string
  */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
