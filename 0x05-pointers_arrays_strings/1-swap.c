#include "main.h"

/**
 * swap_int - the function swaps the value of two integer
 * @a: Pointer is the first integer
 * @b: Pointer is the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
