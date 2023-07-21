#include "main.h"
/**
  * _isupper - checks for the upper letter
  * @c: the letter
  *
  * Return: 1 when upper 0 when lower
  */
int _isupper(int c)
{
	if (c >= 61 && c <= 90)
		return (1);
	return (0);
}
