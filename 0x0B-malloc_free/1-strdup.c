#include "main.h"
#include <stdlib.h>

/**
  * _strdup -function to returns a pointer to newly allocated space in memory
  * which contains a copy of the string given as a parameter.
  * @str: the initial string
  *
  * Return: returns a pointer to the duplicated string.
  * returns NULL if insufficient memory was available
  */
char *_strdup(char *str)
{
	char *dest;
	int l, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	dest = (char *)malloc((sizeof(char) * length) + 1);
	if (dest == NULL)
		return (NULL);
	for (l = 0; l < length; l++)
		dest[l] = str[l];
	dest[length] = '\0';
	return (dest);
}
