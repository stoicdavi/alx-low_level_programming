#include "lists.h"
/**
 * pop_listint - deletes the head of a list_t linked list and returns the head node data
 * @head: pointer to pointer of head node.
 *
 * Return: 0 if list is empty.
 * headnode data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop = 0;

	if (*head == NULL)
		return (pop);

	if (*head == NULL)
		return (pop);

	temp = *head;
	pop = temp->n;
	*head = (*head)->next;
	free(temp);

	return (pop);
	
}
