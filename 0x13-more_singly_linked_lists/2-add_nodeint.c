#include<stdio.h>
#include"lists.h"

/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to assign to the new node
 *
 * Return: address of the new element, or
 * NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
