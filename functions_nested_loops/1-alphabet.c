#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char counter = 'a';

	for (counter = 'a'; counter <= 'z'; counter++)
	{
		_putchar(counter);
	}
	_putchar('\n');
}
