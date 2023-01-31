#include"lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @index: index of the node, starting at 0
 * @head: pointer to the first node
 *
 * Return: nth node of a listint_t list
 * and returns NULL if the node does not exit.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index ; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
