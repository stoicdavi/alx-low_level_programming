#include "lists.h"

/**
 * listint_len - to print the number of elements in the linked list.
 * @h: pointer to the head node
 *
 * Return: number of elemnts in the node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
