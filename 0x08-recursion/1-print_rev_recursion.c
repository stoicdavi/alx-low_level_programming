#include "main.h"
/**
  * _print_rev_recursion - fuction to print the recursion n reverse
  *
  * @s: the string
  * Return: null
  */
void _print_rev_recursion(char *s)
{
	int n = '\0';

	if (s[n])
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
