#include "main.h"

/**
 * _memset - code
 * @s: code
 * @b: code
 * @n: code
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
