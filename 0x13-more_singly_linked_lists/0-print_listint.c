#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of linklist node
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
