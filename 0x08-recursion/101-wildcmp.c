#include "main.h"

/**
  * wildcmp - function to compares two strings
  * @s1: first string
  * @s2: second string
  * Return: 1 if they match and 0 if not
  */
int wildcmp(char *s1, char *s2)
{
	int n = '\0';

	if (s1[n] && s2[n])
		return (1);
	if (s2[n] == 42 && *(s2 + 1) != '\0' && s1[n])
		return (0);
	if (s1[n] == s2[n])
		return (wildcmp(s1 + 1, s2 + 1));
	if (s2[n] == 42)
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
