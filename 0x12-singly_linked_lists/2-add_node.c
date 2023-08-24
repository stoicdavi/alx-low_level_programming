#include "lists.h"
size_t str_len(char *st);
/**
 * add_node - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = str_len(new->str);
	new->next = *head;
	*head = new;
	return new;
}

/**
 * str_len - finds the length of a string
 * @str: string to be checked the length
 * Return: length of string
 */
size_t str_len(char *st)
{
	size_t count = 0;

	for (; st[count]; count++)
		;
	return (count);
}
