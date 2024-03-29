#include<stdio.h>
#include"lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{

		nodes++;

		printf("%d\n", h->n);

		h = h->next;

	}
	return (nodes);
}
