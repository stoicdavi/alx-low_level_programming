#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - a function that concatenates two strings.
  *
  * @s1: the first char
  * @s2: the secound char
  * @n: unsigned int
  *
  * Return: If the function fails, it should return NULL
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, z;
	char *s;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
			;
	}
	if (s2 == NULL)
	{
		b = 0;
	}
	else
	{

		for (b = 0; s2[b]; ++b)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + 1));
	if (s == NULL)
		return (NULL);

	for (z = 0; z < a; z++)
		s[z] = s1[z];
	for (z = 0; z < b; z++)
		s[z + a] = s2[z];
	s[a + b] = '\0';
	return (s);
}

