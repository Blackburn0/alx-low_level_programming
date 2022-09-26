#include "main.h"

/**
 * _memcpy -
 * @dest:
 * @src:
 * @n:
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
