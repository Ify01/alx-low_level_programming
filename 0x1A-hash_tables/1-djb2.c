#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: the string
 * Return: success or error
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int dj;
	int value;

	dj = 5381;
	while ((value = *str++))
		dj = ((dj << 5) + dj) + dj;

	return (dj);
}
