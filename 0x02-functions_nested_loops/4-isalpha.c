#include "main.h"
/**
* _isalpha - Checks for Alphabetic Characters
*
* @c: Alphabetic character
*
* Return: 1 (True - alphabetic chars) OR 0 (False - not alphabetic char)
*/
int _isalpha(int c)
{
	int b = c;

	if ((b >= 97 && b <= 122) || (b >= 65 && b <= 90))
		return (1);
	else
		return (0);
}
