#include "main.h"
#include <unistd.h>

/**
* print_alphabet - wil print the alphabets
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
		_putchar(letter);
	_putchar('\n');
}
