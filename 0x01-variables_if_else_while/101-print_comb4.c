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

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = 0; inner <= 9; inner++)
		{
			putchar(outer + '0');
			putchar(inner + '0');

			if (outer == 9 && inner == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


