#include "main.h"
#include <stdlib.h>
/**
  * _calloc - fuction that allocates memory using calloc
  * @nmemb: first int
  * @size: size of the memory
  * Return: Null when no memoy is allocated
  * b when memory is allocated
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int a, num;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	num = nmemb * size;
	b = malloc(nmemb * size);
	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < num; a++)
		b[a] = 0;
	return (b);
}
