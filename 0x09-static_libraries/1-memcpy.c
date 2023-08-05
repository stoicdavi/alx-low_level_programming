#include "main.h"
/**
  * _memcpy - function to copy memry area
  * @dest: where the memory are is coppied to
  * @src: source of the data or memory location
  * @n: number of bytes to be coppied
  * Return: the coppied memory location
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

	b = 0;
	for (; b < n; n++)
		dest[b] = src[b];
	return (dest);
}
