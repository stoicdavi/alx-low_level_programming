#include "main.h"
/**
  * binary_to_uint - function converts binary to %u(unsigned int)
  * @b: pointe to the string
  * Return: Coverted number or 0 if
  * there is nomore chars in the string b that is not 0|1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	size_t count;
	int i;

	while (!b)
		return (0);
	count = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		count <<= 1;
		if (b[i] == '1')
			count++;
	}
	return (count);
}
