#include "lists.h"
/**
 * add_node _ add new element to the beginning of the list
 * @head: adress of the head of list
 * @str: string to add to list
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	if(*head)
		new->next = *head;
	else
		new->next = NULL;

	*head = new;
	return (*head);
}
