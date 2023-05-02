#include "lists.h"
/**
 * listint_len - count elements in a linked list
 * @h: linked list
 * Return: length of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->n)
			len++;
		h = h->next;
	}
	return (len);
}
