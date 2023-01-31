#include"lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to the head node of listint_t list
 *
 * Return: head nodes data(n)
 * if the node is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	unsigned int i;

	if (*head == NULL)
		return (0);

	node = *head;
	i = node->n;
	*head = node->next;
	free(node);

	return (i);
}
