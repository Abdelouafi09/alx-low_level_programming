#include "lists.h"
/**
 * add_nodeint - adding new element to a linked list
 * @head: the linked list adresse
 * @n: int to add as a new element
 *
 * Return: the new element adressse
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

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
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
