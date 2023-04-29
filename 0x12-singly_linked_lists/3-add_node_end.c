#include "lists.h"
/**
 * add_node_end - add new element at the end of the linked list
 * @head: head pointer of linked list
 * @str: string to add
 * Return: the adresse of the new added element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}

	temp->next = new;
	return (new);
}
