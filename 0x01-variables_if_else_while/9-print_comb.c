#include <stdio.h>

/**
 * main - program entry point
 *
 * Description:
 * Return: 0 (Successful)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10;  num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
