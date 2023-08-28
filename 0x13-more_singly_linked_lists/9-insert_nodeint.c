#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position in the list
 * @head: pointer to the pointer of the first node in list
 * @idx: index of list where the new node is to be added
 * @n: integer to input
 * Return: address of the new node or NULL if is not found
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	size_t count = 0;

	temp = *head;

	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		if (idx == 0 && idx < 1)
		{
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		if (count + 1 == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
	}
	free(newNode);
	return (NULL);
}
