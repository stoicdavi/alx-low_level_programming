#include "lists.h"
/**
  * list_len - function to calculate the lenght of the linked list
  * @h: the list to be calculated
  * Return: The length
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
