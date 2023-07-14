#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int ken;

	for (ken = 0; ken <= 9; ken++)
		putchar('0' + ken);
	putchar('\n');
	return (0);
}
