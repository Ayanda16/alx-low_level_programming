#include "hash_tables.h"

/**
 * hash_table_delete - Frees an entire hash table
 * @ht: Pointer to the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			node = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = node;
		}
	}
	free(ht->array);
	free(ht);
}
