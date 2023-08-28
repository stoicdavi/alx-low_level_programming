#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first list element in the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
