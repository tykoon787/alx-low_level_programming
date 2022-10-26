#include "lists.h"

/**
 * list_len - Function that gets number of nodes of linked list
 * @h: head
 * Return: number of nodes as size_t
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
