#include "main.h"
/**
  * _strlen_recursion -  function to return the length of the str
  *
  * @s: the string
  * Return: lenght of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
