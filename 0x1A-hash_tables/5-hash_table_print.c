#include "hash_tables.h"




/**
 * hash_table_print - function to print hash
 * table
 * @ht: hash tabl
 */



void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned int last_key;
	hash_node_t *printer;

	if (ht == NULL)
		return;
	last_key = ht->size - 1;
	while (!ht->array[last_key] && last_key != 0)
		last_key--;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		printer = ht->array[i];
		while (printer)
		{
			printf("'%s': '%s'", printer->key, printer->value);
			if (i != last_key)
				printf(", ");
			printer = printer->next;
		}
	}
	printf("}");
	printf("\n");
}
