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

	for (outer = 0; outer < 8; outer++)
	{
		for (inner = outer + 1; inner < 9; inner++)
		{
			for (inner2 = inner + 1; inner2 <= 9; inner2++)
			{
				putchar(outer + '0');
				putchar(inner + '0');
				putchar(inner2 + '0');

				if (outer == 7 && inner == 8 && inner2 == 9)
					break;

				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


