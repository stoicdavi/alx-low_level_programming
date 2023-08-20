#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - function to print strings
  * @separator: comms sepators
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int b;

	va_start(str, n);
	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			printf("%s", va_arg(str, char *));
			if (b != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(str);
}
