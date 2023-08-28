#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes index of a node
 * @head: pointer to the pointer of first elemnt of list.
 * @index: index of node to be deleted.
 * Return: 1 on success, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	listint_t *nextNode, *temp;

	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && count < index - 1)
	{
		temp = temp->next;
		count++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	nextNode = temp->next->next;
	free(temp->next);
	temp->next = nextNode;

	return (1);
}
