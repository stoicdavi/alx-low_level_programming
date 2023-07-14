#include <stdio.h>
/* more headers goes here */
/**
* main - entry point
*
* Return: 0 Always (success)
*/
int main(void)
{
	char loop;

	for (loop = 'a'; loop <= 'z'; loop++)
		putchar(loop);

		putchar('\n');
	return (0);
}
