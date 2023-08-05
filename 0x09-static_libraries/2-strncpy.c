#include "main.h"

/**
  * _strncpy - a function that copies a string
  * @dest: we copy to this string
  * @src: we copy from this string
  * @n: number of bytes to copy
  *
  * Return: pointer to the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
