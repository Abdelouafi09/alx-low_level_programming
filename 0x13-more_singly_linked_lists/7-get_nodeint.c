#include "lists.h"
/**
 * get_nodeint_at_index - return node by index
 * @head: list's pointer
 * @index: the index of node required
 * Return: required node's pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head)
		ptr = head;
	else
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (!ptr)
			return (NULL);
		ptr = ptr->next;
	}
	return (ptr);
}
