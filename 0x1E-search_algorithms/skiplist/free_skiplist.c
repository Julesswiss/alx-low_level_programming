#include <stdlib.h>
#include "search_algos.h"

/**
 * free_skiplist - It Deallocates a singly linked list
 *
 * @list:It is a Pointer to the linked list to be freed
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
