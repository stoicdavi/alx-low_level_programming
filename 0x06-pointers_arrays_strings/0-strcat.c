#include "main.h"
/**
  * _strcat - function to combine/concatenates two strings
  * @dest: Destination string
  * @src: Source data
  * Return: returns the final concatenation
  */
char *_strcat(char *dest, char *src)
{
	char *final = dest; /* to store the starting address of destination */

	/* to fint the end of the dest string */
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (final);
}

