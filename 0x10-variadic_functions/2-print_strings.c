#include "variadic_functions.h"
/**
  * print_strings - function to print strings
  * @separator: comms sepators
  * @n: number of arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int b;

	va_start(string, n);
	 for (b = 0; b < n; b++)
	 {
		 printf("%s", va_arg(str, char));
		 if (i = n - 1)
		 {
			 printf("s", separator);
		 }
	 }
	 printf("\n");
	 va_end(str);
}
