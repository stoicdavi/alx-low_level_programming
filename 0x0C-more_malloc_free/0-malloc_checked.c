#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory using malloc
  * @b: allocated memory space
  * Return: a pointer to the allocated memory
  *
  */
void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);
	return (size);
}
