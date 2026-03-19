#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

    /* Loop through hours and minutes, printing in HH:MM format */
	for (h = 0; h < 24; h++)
	{
    /* Loop through minutes for each hour  */
		for (m = 0; m < 60; m++)
		{
    /* Print the current time in HH:MM format */
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
