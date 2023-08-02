#include "main.h"
#include <stdio.h>
/**
  * _strpbrk - function to searches a string for any of a set of bytes.
  * @s: string to search
  * @accept: the string bytes
  *
  * Return: a pointer to the byte in s that matches one of the bytes
  * in accept, or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	int b, j;

	for (b = 0; *s != '\0'; b++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
