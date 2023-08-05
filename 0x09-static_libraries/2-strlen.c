#include "main.h"
/**
  * _strlen - a function to returns the length of a string
  * @s: pointer value to be checked
  * Return: the lenth of the string
  */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
