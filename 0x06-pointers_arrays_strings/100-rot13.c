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
/*#include <stdio.h>*/

/**
  * rot13 - encodes a string using ROT13 cipher
  * @s: string to encode
  *
  * Return: the resulting encoded string
   */
/*
 * char *rot13(char *s)
  *{
	*char *ptr = s;
	*char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	*char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	*while (*ptr != '\0')
	*{
	*	char *found = alphabet;
	*	char *rot13_found = rot13_alphabet;
	*	int found_index = 0;
	*	while (*found != '\0')
	*	{
	*		if (*ptr == *found)
	*		{
	*			*ptr = rot13_found[found_index];
	*			break;
	*		}
	*		found++;
	*		rot13_found++;
	*		found_index++;
	*	}
	*	ptr++;
	*}
	* return s;
* }
*/
