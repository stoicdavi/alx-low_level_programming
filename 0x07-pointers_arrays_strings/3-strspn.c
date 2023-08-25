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
	int i, b, c;

	i = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] < 32)
		{
			for (c = 0; accept[c]; c++)
			{
				if (s[b] == accept[c])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}
