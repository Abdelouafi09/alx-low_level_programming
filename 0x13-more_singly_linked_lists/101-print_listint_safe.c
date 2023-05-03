#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
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
