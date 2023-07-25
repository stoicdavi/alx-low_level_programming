#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s:string to be reversed
  * Return:void
  */
void print_rev(char *s)
{
	int i;/*, i for the while loop*/

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	/**
	  * alternative code
	  * int i;
	  * int count = 0;
	  * for (i = 0; s[i] != '\0'; i++)
		*count++;
		* for (i = count - 1; i >= 0; i++)
		* _putchar(s[i])
	*}
	* _putchar('\n');
	*/
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
