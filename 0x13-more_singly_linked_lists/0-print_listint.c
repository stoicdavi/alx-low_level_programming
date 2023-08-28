#include "lists.h"

/**
 * print-list - function to print the list of elements
 * @h: the string
 * Return: The elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
