#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - function to print strings
  * @separator: comma separators to separate the numbers
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int b;

	va_start(str, n);
	for (b = 0; b < n; b++)
	{
		char *strin = va_arg(str, char *);

		if (strin == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strin);
		}
		if (separator != NULL && b != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
