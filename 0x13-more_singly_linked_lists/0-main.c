#include "lists.h"
/**
 * main - check my code
 *
 * return: always 0
 */
int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = &hello;
	head = new;
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
