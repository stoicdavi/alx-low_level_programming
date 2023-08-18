#include "variadic_functions.h"

/**
  * print_all - Prints all of the arguments specified
  * @format: this is a list of types of arguments
  */
void print_all(const char * const format, ...)
{
	int i;
	int b;
	char *str;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				b = 0;
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				b = 0;
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				b = 0;
				break;
			default:
				b = 1;
				break;
		}
		if (format[i + 1] != '\0' && b == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
