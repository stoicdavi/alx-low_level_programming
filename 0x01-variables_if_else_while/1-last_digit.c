#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	k = n % 10;

	if (k > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	else if (k <= 5 && k != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);

}
