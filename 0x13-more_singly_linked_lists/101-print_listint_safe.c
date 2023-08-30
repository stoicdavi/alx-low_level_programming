#include "lists.h"

/**
 * my_realloc - reallocates memory for an array of pointers
 * of the nodes
 * @list: list to be changed / updated
 * @size: size of the new list
 * @new: new node to be added to the list
 * Return: pointer to the new list after update
 */
const listint_t **my_realloc(const listint_t **list, size_t size, const listint_t *new)
{
	size_t b;
	const listint_t **newlist;

	newlist = (const listint_t **)malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (b = 1; b < size; b++)
		newlist[b] = list[b];
	newlist[b] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the beginning of the linked list
 * Return: number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	int b, count = 0;
	const listint_t **list = NULL;

	while (head)
	{
		for (b = 0; b < count; b++)
		{
			if (head == list[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
		}
		count++;
		list = my_realloc(list, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
