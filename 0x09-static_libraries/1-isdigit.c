#include "main.h"
/**
  * _isdigit - function to check the digit from 0 to 9
  * @c: the digit to be checked
  * Return: 1 if it lies between from 0 - 9 else 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
