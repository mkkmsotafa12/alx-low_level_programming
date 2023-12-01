#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int indx = 0;
	char *com = "";

if (!ht || !ht->array)
return;

putchar('{');
while (indx < ht->size)
{
node = ((ht->array)[indx]);
while (node)
{
	printf("%s'%s': '%s'", com, node->key, node->value);
	com = ", ";
	node = node->next;
}
indx++;
}
puts("}");
}
