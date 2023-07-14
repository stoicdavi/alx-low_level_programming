#include <stdlib.h>

#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - entry point
*
* printf outputs the data
*
* if else checks the input value
*
* Return: 0  Always (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%lu is positive", n);
	else if (n == 0)
		printf("%lu is zero", n);
	else if (n < 0)
		printf("%lu is negative", n);
	return (0);
}
