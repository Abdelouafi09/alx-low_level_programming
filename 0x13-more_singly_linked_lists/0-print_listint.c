#include "lists.h"
/**
 * print_listint - print a linked list elements
 * @h: list adresse
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
