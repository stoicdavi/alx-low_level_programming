#include "main.h"
/**
  * _puts - tu output the characters
  * @str: string
  * Return: void
  */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
