#include"lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of all data in the list
 * if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
