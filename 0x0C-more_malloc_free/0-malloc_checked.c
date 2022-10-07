#include "main.h"
#include <stdlib.h>

/**
 * @b: code
 * Return: code
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}