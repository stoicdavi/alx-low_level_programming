#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 when on success
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
