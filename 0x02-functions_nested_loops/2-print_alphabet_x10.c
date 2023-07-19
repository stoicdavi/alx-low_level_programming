#include "main.h"

/**
 * print_alphabet_x10 - will output alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha = 97;

	while (n < 11)
	{
		_putchar('\n');
		n++;
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
	}
}
