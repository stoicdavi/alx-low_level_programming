#include "main.h"
/**
  * _memset - function to fill the memory with constant byte
  * @s: memory area to be filled
  * @b: character to be coppied
  * @n: number of time to copy
  * Return: the ponted location
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;

	for (; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
