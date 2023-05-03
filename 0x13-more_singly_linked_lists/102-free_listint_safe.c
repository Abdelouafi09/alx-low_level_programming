#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0, i = 0;
	listint_t *current, *tmp;
	int loop_detected = 0;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;

	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			loop_detected = 1;
			break;
		}
		tmp = current;
		current = current->next;
		free(tmp);
	}

	if (loop_detected)
	{
		current = *head;
		for (i = 0; i < count - 1; i++)
		{
			tmp = current;
			current = current->next;
			free(tmp);
		}
		free(current);
	}

	*head = NULL;

	return (count);
}
