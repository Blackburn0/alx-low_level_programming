#include "lists.h"

/**
 * list_len_recursion - code
 * @h: code
 * Return: code
 */
size_t list_len_recursion(const list_t *h)
{
	if (h != NULL)
		return (1 + list_len_recursion(h->next));
}
