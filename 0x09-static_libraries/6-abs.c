#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: the interger to compute its absolute value
  * Return: absValue
  */
int _abs(int n)
{
	int b = n;

	if (b < 0)
	{
		b = b * (-1);
	}
	return (b);
}
