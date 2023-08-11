#include <stdlib.h>
#include "main.h"
/**
  * array_range - function that returns array of functions
  * @min: the smallest int
  * @max: the maximum int
  * Return: Null when false and
  */
int *array_range(int min, int max)
{
	int *p;
	int a, siz;

	if (min > max)
	{
		return (NULL);
	}
	siz = max - min + 1;

	p = malloc(sizeof(int) * siz);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; min++, a++)
		p[a] = min;
	return (p);
}
