#include"lists.h"
#include<string.h>
#include<stddef.h>
#include<stdlib.h>

/**
 * *add_node_end - adds a new node at the end of list_t list
 * @head: pointer to the head of list_t list
 * @str: pointer to the string
 *
 * Return: ddress of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp_newnode;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		tmp_newnode = *head;
		while (tmp_newnode->next)
			tmp_newnode = tmp_newnode->next;
		{
			tmp_newnode->next = new;
		}
	}
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

