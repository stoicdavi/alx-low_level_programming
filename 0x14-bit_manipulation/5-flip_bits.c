#include "main.h"
/**
 * flip_bits - rturns number of bits you would need to flip
 * @n: the first bit
 * @m: The second bit
 * Return: The fliped bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	size_t count = 0;

	while (xor_result)
	{
		count = count + (xor_result & 1);
		xor_result >>= 1;
	}
	return (count);
}
