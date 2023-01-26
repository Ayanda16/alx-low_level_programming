#include<stdlib.h>
#include"lists.h"
#include<string.h>

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: pointer to the head of the list_t list
 * @str: pointer to the string that must be duplicated
 *
 * Return: address of new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */

int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
