#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list args;

va_start(args, n);
for (a = 0; a < n; a++)
{
if (separator != NULL && a > 0)
printf("%s", separator);
printf("%d", va_arg(args, int));
}
va_end(args);
printf("\n");
}
