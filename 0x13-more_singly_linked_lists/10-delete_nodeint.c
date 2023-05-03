#include "lists.h"
/**
 * delete_nodeint_at_index - delete en element depending on its position
 * @head: the address of the linked list
 * @index: the position of element
 * Return: return 1 when success and -1 when failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
	unsigned int i;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	if (!del)
		return (-1);
	temp->next = temp->next->next;
	free(del);
	return (1);
}
