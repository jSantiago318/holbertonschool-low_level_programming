#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints formatted output to stdout
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int result;

	va_start(args, format);
	result = vprintf(format, args);
	va_end(args);

	return (result);
}
