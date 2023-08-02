#include "main.h"
#include <stdio.h>
/**
  * _strspn - function to find the length of prefix substring
  * @s: the string
  * @accept: to check the length
  * Return: the number of bytes in initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
