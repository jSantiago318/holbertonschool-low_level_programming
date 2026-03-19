#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		/* if not 9 add ', '*/
		putchar(c + '0');
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
