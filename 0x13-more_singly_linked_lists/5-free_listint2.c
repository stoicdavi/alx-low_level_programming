#include "lists.h"
/**
 * free_listint2 -function that frees a listint_t list and sets head to null.
 * @head: pointer to pointer of first node of list.
 *
 * Return: void no return value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head != NULL)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}
	}
}
