#include "main.h"
/**
 * print_times_table - print 'n' times table, starting with 0
 * @n: the number for the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar((product % 10) + '0');
			} else {
                /* using printf for easier debugging */
            
             }
		}
		_putchar('\n');
	}
}


