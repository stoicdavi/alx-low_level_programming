 #include "main.h"
/**
  * factorial - function to print factorial of a number
  *
  * @n: the integer/ the number
  * Return: -1 if n < 0 and 1 if n >= 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
