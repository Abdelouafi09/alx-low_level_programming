#include "lists.h"
/**
 * free_list - free the space allocated by a linked list
 * @head: the adresse of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
	
}
