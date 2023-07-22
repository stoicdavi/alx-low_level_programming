#include "main.h"
/**
  * more_numbers - to print numbers from 0 to 24 ten times
  */
void more_numbers(void)
{
	int t, i;

	t = 0;

	while (t < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
				_putchar((i % 10) + '0');
		}
	t++;
	_putchar('\n');
	}
}
