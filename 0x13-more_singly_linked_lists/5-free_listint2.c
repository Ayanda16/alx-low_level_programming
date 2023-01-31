#include"lists.h"
/**
* free_listint2 - frees a listint_t list and sets head to NULL
* @head: first node of listint_t
*/
void free_listint2(listint_t **head)
{

	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
