#include "hash_tables.h"

/**
 * hash_table_create - Write a function that creates a hash table
 * @size: the size
 * Return: success or error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int y;

	hash_table_created = malloc(sizeof(hash_table_t));

	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;
	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_created->array == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
	{
		hash_table_created->array[y] = NULL;
	}

	return (hash_table_created);
}
