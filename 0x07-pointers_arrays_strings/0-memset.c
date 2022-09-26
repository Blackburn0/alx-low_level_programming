#include "main.h"

/**
 * _memset -
 * @s:
 * @b:
 * @n:
 * Return:
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
