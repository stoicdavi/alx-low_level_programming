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
	int i;

	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}
