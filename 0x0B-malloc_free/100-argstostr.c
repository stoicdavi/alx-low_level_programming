#include "main.h"
#include <stdlib.h>

/**
 * argstostr -function that concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int a, j, k, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		s = av[a];
		j = 0;
		while (s[j++])
			length++;
		length++;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	for (a = 0, j = 0; a < ac && j < length; a++)
	{
		s = av[a];
		k = 0;
		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
