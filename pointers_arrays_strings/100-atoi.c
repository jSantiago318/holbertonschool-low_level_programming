#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-' && started == 0)
			sign *= -1;
		else if (*s == '+' && started == 0)
			; /* continue */
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started == 1)
			break;

		s++;
	}

	return (result * sign);
}
