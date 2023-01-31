#include"lists.h"

/**
* free_listint - frees a listint_t list
* @head: first node of listint_t
*
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
