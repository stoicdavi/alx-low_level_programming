#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _strspn - function to find the length of prefix substring
  * @s: the string
  * @accept: to check the length
  * Return: the number of bytes in initial segment
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = *s;
		if (strchr(accept, i) == NULL)
		{
			return (s - accept);
		}
		s++;
	}
	return 0;
}
