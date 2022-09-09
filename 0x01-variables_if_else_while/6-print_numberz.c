nclude <stdio.h>



/**
 *main - program execution begins here
 *
 *Description: This program prints out all the letters of the alphabet
 *and then prints out newline character.
 *Return: 0 (Successful)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
