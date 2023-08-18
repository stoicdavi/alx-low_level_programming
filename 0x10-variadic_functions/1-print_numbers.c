#include "variadic_functions.h"
/**
  * print_numbers - function to print all the numbers
  * @separator: comma separators
  * @n: number of arguments
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int b;
	int a;

	va_start(number, n);
	if (separator == NULL)
		return;
	for (b = 0; b < n; b++)
	{
		a = va_arg(number, int);
		printf("%d", a);
		if (b != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(number);
}
