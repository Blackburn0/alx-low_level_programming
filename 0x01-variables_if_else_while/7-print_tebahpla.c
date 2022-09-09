#include <stdio.h>

/**
 *main - program execution begins here
 *
 *Description: This program prints out all the letters of the alphabet.
 *Return: 0 (Successful)
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
