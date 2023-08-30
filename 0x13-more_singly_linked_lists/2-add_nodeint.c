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
	listint_t *temp;/*declare a pointer to the list_t*/

	/* allocatint memory to the temporary pointer*/
	temp = (listint_t *) malloc(sizeof(listint_t));
	if (temp == NULL)/*if the memory allocation fails*/
		return (NULL);
	temp->next = *head;/* sets the next pointer to the head*/
	temp->n = n;/*seting the data of the temp*/
	*head = temp;/*update head pointer to point to the new node*/
	return (*head);/*return the address of the new head*/
}
