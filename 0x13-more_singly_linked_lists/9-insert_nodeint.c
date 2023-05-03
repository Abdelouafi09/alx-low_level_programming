#include "lists.h"
/**
 * insert_nodeint_at_index - insert new element at an index
 * @head: pointer to linked list
 * @idx: position where the new element added
 * @n: data of the element to add
 * Return: address of new element or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *ptr;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	ptr = *head;
	if (!(*head))
	{
		free(new);
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			for (i = 1; i < idx; i++)
			{
				if (!ptr)
					return (NULL);
				ptr = ptr->next;
			}
			new->next = ptr->next;
			ptr->next = new;
		}
	}
	return (new);
}
