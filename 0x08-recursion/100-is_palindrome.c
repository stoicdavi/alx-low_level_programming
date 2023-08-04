#include "main.h"

int _strlen_recursion(char *s);
int help_me_pass(char *s, int i, int len);

/**
  * is_palindrome - check if the given string is palindrome
  * @s: input string
  *
  * Return: 0 if the string is not palondrome
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (help_me_pass(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that passes if the string is palidrome
 * @s: An input tsring
 * Return: i if is a string palindrome or  0 in otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  * help_me_pass - A function with a revesed string
  * @s: the input string
  * @len:length of string input
  * @i: to loop through the string
  * Return: reverse string
  */
int help_me_pass(char *s, int i,  int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (help_me_pass(s, i + 1, len - 1));
}
