#include "lists.h"

/**
 * list_len - code
 * @h: code
 * Return: code
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
