#include "main.h"
/**
  *_strchr - function to locate a character in a string
  * @s: the string
  * @c: the character
  * Return: null if the character is not found
  */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
