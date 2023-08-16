#include "function_pointers.h"

/**
  * int_index - The Index
  * @array: the array to bw checked
  * @size: size of the array
  * @cmp: ponter
  *
  * Return: b and -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (b < size)
			{
				if (cmp(array[b]))
					return (b);
				b++;
			}
		}
	}
	return (-1);
}
