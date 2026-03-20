#include "main.h"
#include <stdio.h>
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
                printf(" %d", product);
                /* if not last column, add comma and space */
                if (j != n)
                    printf(", ");
                if (product < 10)
                    printf("  "); /* add extra spaces for alignment */
                else if (product < 100)
                    printf(" "); /* add extra space for alignment */
                
            
             }
		}
		_putchar('\n');
	}
}


