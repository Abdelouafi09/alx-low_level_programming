#include "lists.h"
/**
 * dlistint_len - counts the liength of a doubly linked
 * @h: the head pointer
 * Return: returns the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
