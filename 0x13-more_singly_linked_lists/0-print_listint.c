#include "lists.h"

/**
 * print-list - function to print the list of elements
 * @h: the string
 * Return: The elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->stri== NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->n, h->stri);
		}
		count++;
		h = h->next;
	}
	return (count);
}
