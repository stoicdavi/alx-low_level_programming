#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int b, j, rev;

	for (b = 0, j = n - 1; b < n / 2; b++, j--)
	{
		rev = a[b];
		a[b] = a[j];
		a[j] = rev;
	}
}

