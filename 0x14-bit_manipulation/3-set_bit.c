#include "main.h"
/**
  * set_bit - function sets a value of a bit to 1 at a given ind
  * @n: the value to be set ro 1
  * @index: The given index
  * Return: 1 if it works, or -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t NumSet = 1;

	NumSet <<= index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) | NumSet;
	return (1);
}
