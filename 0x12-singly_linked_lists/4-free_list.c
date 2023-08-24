#include "lists.h"
/**
  * free_list - functio to free the memory allocated
  * @head: Head or he start of the node
  * Return: no return value, it is void
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
