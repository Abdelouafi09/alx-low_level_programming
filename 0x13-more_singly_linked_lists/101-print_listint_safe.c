#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	/* Count the number of nodes in the list */
	nodes = looped_listint_len(head);

	/* If there is no loop, print the entire list */
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	/* If there is a loop, print the list up to the last node before the loop */
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		/* Print the last node before the loop */
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
