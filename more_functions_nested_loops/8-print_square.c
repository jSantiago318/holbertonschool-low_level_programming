#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int width, height;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
