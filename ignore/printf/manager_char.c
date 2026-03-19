#include "main.h"
#include <string.h>

/**
 * handle_char - prints a char argument
 * @args: va_list containing the char
 *
 * Return: number of characters printed
 */
int manager_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * manager_string - prints a string argument
 * @args: va_list containing the string
 *
 * Return: number of characters printed
 */
int manager_string(va_list args)
{
	char *char_ptr = va_arg(args, char *);
	int count = 0;

	if (char_ptr == NULL)
		char_ptr = "(null)";

	while (*char_ptr)
	{
		_putchar(*char_ptr++);
		count++;
	}
	return (count);
}

/**
 * manager_percent - prints a literal percent sign
 * @args: unused
 *
 * Return: 1
 */
int manager_percent(va_list args)
{
	(void)args;
	return (0);
}
