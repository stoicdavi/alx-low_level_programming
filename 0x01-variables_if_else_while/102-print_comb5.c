#include <stdio.h>
/**
 * main - Entry point into the program
 *
 * Return: 0 when execution is successful
 */
int main(void)
{
	int outer, inner;

	for (outer = 0; outer < 99; outer++)
	{
		for (inner = outer + 1; inner <= 99; inner++)
		{
			putchar((outer / 10) + '0');
			putchar((outer % 10) + '0');
			putchar(' ');
			putchar((inner / 10) + '0');
			putchar((inner % 10) + '0');

			if (outer == 98 && inner == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
