#include "main.h"

int get_length(char *);

/**
 * print_rev - prints a string in reverse
 * @s: String to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = get_length(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


/**
 * get_length - returns the length of a String
 * @s: String length which we are to determine
 *
 * Return: Length of String
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
