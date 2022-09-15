#include "main.h"

/**
 * _isupper - Determines if a character is an uppercase character
 * @c: The integer representing the ASCII code of the character
 *
 * Description: This 
 * Return: 1 (uppercase) or 0 (not uppercase)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
