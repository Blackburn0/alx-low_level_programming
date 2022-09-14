#include "main.h"

/**
 * _islower - Is the character lowercase?
 *
 * Description: This program receives a character from
 * the user and then determines if the character is a
 * lowercase character or not.
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}