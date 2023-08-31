#include "main.h"
/**
 * get_bit - funtion that returns the value of a bit at a given index
 * @n: the value
 * @index: index starting from zero
 * Return: the value of the index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t given;

	if (index > 64)
		return (-1);

	given = n >> index;

	return (given & 1);
}
