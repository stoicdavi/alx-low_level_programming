#include "main.h"
/**
  * _memset - fill a block of memory with a specific value
  * @s: starting address
  * @b: the required value
  * @n: number of bytes
  * Return: return s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
