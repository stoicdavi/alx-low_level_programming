#include "lists.h"
/**
 * listint_len - returns the lenght of the string
 * @h: pointes to the head of the of the list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list.
 * @head: pointer to first elemnt of list
 * @index: index of node that is pointed to
 * Return: nth node, NULL if node not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;
	listint_t *current;

	current = head;
	count = listint_len(head);

	if (current == NULL)
		count++;
	if (count <= index)
	{
		return (NULL);
	}
	else
	{
		count = 0;
		while (current)
		{
			if (count == index)
			{
				break;
			}
			else
			{
				count++;
				current = current->next;
			}
		}
		return (current);
	}
}
