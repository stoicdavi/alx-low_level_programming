#include "main.h"

/**
  * _strncpy - a function to copy the string
  * @dest: we copy to this string
  * @src: we copy from this string
  * @n: number of bytes to copy
  *
  * Return: pointer to the resulting string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	f = 0;
	while (src[f] != '\0' && f < n)
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
