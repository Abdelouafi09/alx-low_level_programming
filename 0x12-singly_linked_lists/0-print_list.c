#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the elements of a node
 * @h: node pointer
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		n++;
		h = h->next;
	}

	return (n);
}
