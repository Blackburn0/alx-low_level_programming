#include "main.h"

/**
 * set_bit - code
 * @n: code
 * @index: code
 * Return: code
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
