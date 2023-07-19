#include "main.h"

/**
 * print_alphabet_x10 - will output alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char alpha = 'a';

	while (n < 11)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alpha = 'a';
		n++;
		_putchar('\n');
	}
}
