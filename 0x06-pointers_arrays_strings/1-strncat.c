#include "main.h"
/**
  * _strncat - concatenates two strings
  * @dest: final string
  * @src: source sring/ original string
  * @n: integer to loop through
  * Return: returns the destination string
  */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	/*Find the length of the destination and source strings*/
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0' && src_len < n)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	/*Add null-terminator at the end of the concatenated string*/
	dest[dest_len + src_len] = '\0';
	return (dest);
}
