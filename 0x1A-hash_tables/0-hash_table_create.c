#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: Thse size of the array
 *
 * Return: pointer new table or NULL 
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;


