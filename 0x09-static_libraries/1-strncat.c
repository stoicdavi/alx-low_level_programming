#include "main.h"
/**
  * _strncat - function that conctenates two strings
  * @dest: the first string to be concatenated
  * @src: second string concatenated
  * @n: the lenght of the string
  * Return: pointer resulting to the string
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);
}
