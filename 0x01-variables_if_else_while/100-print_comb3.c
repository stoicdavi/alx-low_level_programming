#include <stdio.h>
/**
* main - entry point to the program
*
* Return: 0 Whenever the program runs successfully
*/
int main(void)
{
	int outer;
	int inner;

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = outer + 1; inner < 10; inner++)
		{
			putchar(outer + '0');
			putchar(inner + '0');

			if (outer == 8 && inner == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
