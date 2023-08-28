#include "lists.h"
/**
 * add_nodeint - function add a new node at the beginning of a listint_t list.
 * @head: pointer to pointer of first element of the list
 * @n: elements to be added to the list
 *
 * Return: address of the new element or NULL if null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
