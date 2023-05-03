#include "lists.h"
/**
 * pop_listint - delete the head node and return head nodes data
 * @head: linked list pointer
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!(*head))
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (i);
}
