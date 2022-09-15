#include "main.h"

/**
 * _isdigit - Determines if a character is a digit
 *
 * Return: 1 (digit) or 0 (not digit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
