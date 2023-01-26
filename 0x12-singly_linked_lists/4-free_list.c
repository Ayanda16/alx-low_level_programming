#include <stdlib.h>
#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: first node of list_t list
 *
 * Return: frees a list_t list
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
