#include "lists.h"
/**
 * free_listint2 - free list with setting head to null
 * @head: head that point to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	free(head);
}
