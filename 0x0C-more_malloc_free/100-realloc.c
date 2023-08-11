#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - function that reallocates a memory block
  * using malloc and free
  * @ptr: pointer
  * @old_size: the initial size
  * @new_size: the newly allocated size
  * Return: returns the a pointer to tha allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;
	char *old_p = ptr;

	if (ptr == NULL)
	{
		p =(char*)malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	for (a = 0; a < old_size; a++)
		p[a] = old_p[a];
	free(ptr);
	return (p);
}
