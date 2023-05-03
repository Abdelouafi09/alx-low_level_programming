#include "lists.h"
/**
 * sum_listint - do the summ of all data (n) of a linked list
 * @head: linked list's pointer
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int s = 0;

	ptr = head;
	if (!head)
		return (0);
	while (ptr)
	{
		s += ptr->n;
		ptr = ptr->next;
	}
	return (s);
}
