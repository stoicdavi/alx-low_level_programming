#include "main.h"
/**
  * _isdigit - function to check for the digit
  * @c: the digit to be checked
  * Return: 1 if it is a digit 0 otherwise
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return 1;
	}
	else
		return 0;
}
