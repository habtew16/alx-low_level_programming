#include "hash_tables.h"

/**
 * key_index - funnction to get the inndex of the
 * hash table value
 * @key: key
 * @size: size of the table
 * Return: returns the modulas of the hash key to the size
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2(key) % size);
}
