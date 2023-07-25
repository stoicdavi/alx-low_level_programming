#include "main.h"
#include <stdio.h>
/**
  * print_array - to print the array
  * @a: pointer variable
  * @n: the array value
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
