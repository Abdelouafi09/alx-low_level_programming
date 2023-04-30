#include "lists.h"
/**
 * free_list - free the space allocated by a linked list
 * @head: the adresse of the linked list
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		free(head->str);
		free(head);
	}
}
