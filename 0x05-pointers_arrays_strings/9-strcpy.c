#include "main.h"
#include <stdio.h>
/**
  * *_strcpy - a function that copies the string pointed to by src
  * @dest: where the string is to be coppied to
  * @src: to be coppied from
  * Return: retuens the string of destination after successful copying
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int y;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (y = 0; y < l ; y++)
	{
		dest[y] = src[y];
	}
	dest[l] = '\0';
	return (dest);
}
