#include <stdlib.h>

#include <time.h>

#include <stdio.h>
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
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else if (n < 0)
		printf("is negative");
	return (0);
}
