#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - function to sum all the values
  * @n: the size of the arguments
  * Return: 0 if n is equal to zero else return sum
  * n is the number of arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
