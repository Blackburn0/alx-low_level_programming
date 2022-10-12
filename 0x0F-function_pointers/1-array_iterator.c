#include <stdlib.h>

/**
 * array_iterator -  code
 * @array: code
 * @size: code
 * @action: code
 * Return: code
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
