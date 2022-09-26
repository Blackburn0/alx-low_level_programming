#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -
 * @s:
 * @accept:
 * Return:
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
