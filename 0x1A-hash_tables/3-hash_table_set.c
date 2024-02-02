#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head;

	if (!ht)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];
	if (!head)
	{
		head = malloc(sizeof(hash_node_t));
		if (!head)
			return (0);
		head->key = strdup(key);
		head->value = strdup(value);
		ht->array[idx] = head;
		return (1);
	}
	else
	{
		hash_node_t *current_node = head;
		while (current_node != NULL)
		{
			if (!strcmp(current_node->key, key))
			{
				free(current_node->value);
				current_node->value = strdup(value);
				return (1);
			}
			current_node = current_node->next;
		}
		current_node = malloc(sizeof(hash_node_t));
		if (!current_node)
			return (0);
		current_node->key = strdup(key);
		current_node->value = strdup(value);
		current_node->next = head;
		ht->array[idx] = current_node;
		return (1);
	}
}
