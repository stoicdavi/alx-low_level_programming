#include "main.h"

/**
  * _islower - function check wheteher the character is lowercase
  * @c: character 'c' to be checked if it's lowercase
  * Return: 1 if c is lowercase, 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
