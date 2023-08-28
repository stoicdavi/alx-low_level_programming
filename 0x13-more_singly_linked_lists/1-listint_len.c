#include "lists.h"
/**
 * listint_len - nuon hat returns number of elements in a linked listint_t list.
 * @h: pointer to first node on the list.
 * Return: number of elements in list.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
