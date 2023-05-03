#include "lists.h"
/**
 * add_nodeint - add new node to the beginning of a linked list
 * @head: linked list's adresse
 * @n: int value
 * Return: new node adresse
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
