#include "main.h"
/**
  * swap_int - it's going to swap the variables
  * @a: to be swapped with b
  * @b: to be swapped with the value of a
  */
void  swap_int(int *a, int *b)
{
	int n = *a;

	 *a = *b;
	 *b = n;
}
