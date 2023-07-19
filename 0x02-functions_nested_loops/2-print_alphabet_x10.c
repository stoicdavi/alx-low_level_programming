#include "main.h"

/**
 * print_alphabet_x10 - will output alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha = 97;

	while (n <= 10)
	{
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 97;
		n++;
		_putchar('\n');
	}
}
