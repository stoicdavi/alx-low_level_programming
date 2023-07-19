#include "main.h"

/**
* print_alphabet - wil print the alphabets
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
		_putchar(letter);
	_putchar('\n');
}
/**
 * main - Entry point
 * Return: 0 when success
 */
int main(void)
{
	print_alphabet();

	return (0);
}
