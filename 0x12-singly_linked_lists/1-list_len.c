#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in the h list
 * @h: node pointer
 * Return: returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
