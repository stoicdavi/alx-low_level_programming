#include "main.h"

/**
  * leet - Encodes a string in 1337
  * @s: string to be encoded
  *
  * Return: the resulting string
  */
char *leet(char *s)
{
	int i, j;
	char *n = "aAeEoOtTlL";
	char *m = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == n[j])
			{
				s[i] = m[j];
			}
		}
	}
	return (s);
}
