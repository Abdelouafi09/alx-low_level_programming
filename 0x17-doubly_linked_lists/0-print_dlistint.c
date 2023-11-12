#include "lists.h"
/**
 * print_dlistint - print the doubly linked list
 * @h: the head pointer
 * Return: return the number of printed nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t count = 0;

	curr = h;
	if (h == NULL)
		return (count);
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		count++;
		curr = curr->next;
	}
	return (count);
}
