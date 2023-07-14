#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always if successful
 */
int main(void)
{
	char zto_a;

	for (zto_a = 'z'; zto_a >= 'a'; zto_a--)
		putchar(zto_a);
	putchar('\n');
	return (0);
}
