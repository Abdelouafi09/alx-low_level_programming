#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: the list pointer
 * Return: the new list pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next = NULL;

	curr = *head;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
