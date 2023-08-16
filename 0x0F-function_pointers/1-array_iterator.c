#include "function_pointers.h"
/**
  * array_iterator - function to iterate
  * @array: the array
  * @size: size of array
  * @action: function called
  * Return: null
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t b;

	if (array == NULL || action == NULL)
		return;
	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
