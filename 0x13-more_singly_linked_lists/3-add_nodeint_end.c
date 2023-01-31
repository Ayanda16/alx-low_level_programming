#include"lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to the adress of the head of listint_t
 * @n: integer to addign to the newnode
 *
 * Return: address of the new element, or
 * NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newnode;
	}
	return (*head);
}
