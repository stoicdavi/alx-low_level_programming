#include "variadic_functions.h"

/**
  * print_all - Prints all of the arguments specified
  * @format: this is a list of types of arguments
  */
void print_all(const char * const format, ...)
{
	int a;
	int flags;
	char *str;
	va_list list;

	va_start(list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				flags = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				flags = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				flags = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flags = 0;
				break;
			default:
				flags = 1;
				break;
		}
		if (format[a + 1] != '\0' && flags == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(list);
}
