#include "main.h"
/**
  * _pow_recursion - fuction to return x raised to y
  * @x: the value to be raised
  * @y: the value raising
  * Return: -1 if y is less than 0 and 1 otherwis
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
