#include "lists.h"
/**
 * free_listint - free space allocated by linked list
 * @head: linked list adresse
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
