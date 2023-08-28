#include "lists.h"
/**
 * sum_listint - fun returnssum of all the data (n) of a listint linked list.
 * @head: pointer to first element of list nodes
 * Return: sum  if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
