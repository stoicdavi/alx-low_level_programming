#include <stdio.h>
/* more headerfiles to be added here */

/**
* main - entry point to the program
*
* Return: 0 when the code executes successfully
*
* putcahr()- used to output character
*
* for () used to loop through the code
*/
int main(void)
{
	int outer;
	int inner;
	int inner2;

	for (outer = 0; outer <= 7; outer++)
	{
		for (inner = 0; inner <= 8; inner++)
		{
			for (inner2 = 0; inner2 <= 9; inner2)
			{
				putchar(outer + '0');
				putchar(inner + '0');
				putchar(inner2 + '0');

				if (outer == 7 && inner == 8 && inner2 == 9)
				continue;

				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


