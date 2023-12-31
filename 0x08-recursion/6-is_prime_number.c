#include "main.h"

int real_pri(int n, int i);

/**
  * is_prime_number - if the input integer is a prime number
  * @n: number to evaluate
  *
  * Return: 1 if n is a prime number, 0 otherwise
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_pri(n, n - 1));
}

/**
  * real_pri - calculates if a number is prime
  * @n: number to evaluate
  * @i: iterator
  *
  * Return: 1 if n is prime, 0 otherwise
  */
int real_pri(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (real_pri(n, i - 1));
}
