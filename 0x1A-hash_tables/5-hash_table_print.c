#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int i = 0;
	char *c_key = NULL, *c_value = NULL;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (c_key && c_value)
				printf("'%s': '%s', ", c_key, c_value);
			c_key = current_node->key;
			c_value = current_node->value;
			current_node = current_node->next;
		}
	}
	if (c_key == NULL)
		printf("}\n");
	else
		printf("'%s': '%s'}\n", c_key, c_value);
}
