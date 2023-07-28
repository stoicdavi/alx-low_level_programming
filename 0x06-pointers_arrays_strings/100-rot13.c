#include "main.h"

/**
  * rot13 -  Encodes a string to rotate
  * @s: string to be encoded
  *
  * Return: the resulting string
  */
char *rot13(char *s)
{
	int i, j;
	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char g[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; f[j] != '\0'; j++)
		{
			if (s[i] == f[j])
			{
				s[i] = g[j];
				break;
			}
		}
	}
	return (s);
}
