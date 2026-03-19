#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int firstMult, secondMult, product;

	for (firstMult = 0; firstMult <= 9; firstMult++)
	{
		for (secondMult = 0; secondMult <= 9; secondMult++)
		{
			product = firstMult * secondMult;
			if (secondMult == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (secondMult != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
