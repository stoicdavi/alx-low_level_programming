#include "main.h"
/**
 * clear_bit - function that set the value of a bit to 0 at given index
 * @n: the value
 * @index: The given index
 * Return: 1  on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t NumSet = 1;

	NumSet <<= index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~NumSet;
	return (1);
}
