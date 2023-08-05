#include "main.h"

/**
  * _strcpy - copy the string pointed to by src
  * include the terminating null byte (\0)
  * to the buffer pointed to by dest
  * @dest: pointer to the buffer in which we copy the string
  * @src: string to be copied
  *
  *  Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
