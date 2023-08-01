#include "main.h"
/**
  * _memcpy - funtion to copy src to dest
  * @dest: to store the final output
  * @src: source data
  * @n: number of bytes
  * Return: returns dest pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
