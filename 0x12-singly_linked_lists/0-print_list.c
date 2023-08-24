#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * print_list - funtion t print number of nodes
  * @h: the string
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
	count++;
	h = h->next;
	}
	return (count);
}
