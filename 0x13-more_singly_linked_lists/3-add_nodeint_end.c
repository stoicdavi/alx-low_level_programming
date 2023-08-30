#include "lists.h"
/**
 * add_nodeint_end - on to add a node at the end of the list
 * @head: head of double pointer of the list
 * @n: size of the list
 * Return: NULL if it if empty
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declaring nodes */
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));/*allocating memory to the new node*/
	if (new == NULL)/*if the memory allocation failed*/
		return (NULL);
	/*assigning adress to the nodes*/
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;/*setting temp to point to start from the head*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
