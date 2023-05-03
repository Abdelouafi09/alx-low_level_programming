#include "lists.h"
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	/* Check if head is NULL or has only one node */
	if (head == NULL || head->next == NULL)
		return (0);
	/* Initialize the tortoise and hare pointers */
	tortoise = head->next;
	hare = (head->next)->next;
	/* Traverse the linked list with the hare and tortoise pointers */
	while (hare)
	{
		/* If there is a loop, break it and count the number of nodes */
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* Count the number of nodes in the loop */
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
