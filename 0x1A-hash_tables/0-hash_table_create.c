#include "hash_tables.h"

/**
* hash_table_create - function to create a hash table.
* @size: Size of the array.
* Return: Pointer to the newly created hash table.
*         NULL if there was an error.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int ii;
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
return (NULL);
for (ii = 0; ii < size; ii++)
ht->array[ii] = NULL;
return (ht);
}
