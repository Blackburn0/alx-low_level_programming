#include "main.h"

/**
 * clear_bit - code
 * @n: code
 * @index: code
 * Return: code
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
