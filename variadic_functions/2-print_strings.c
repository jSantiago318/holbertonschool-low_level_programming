#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
if (separator != NULL && i > 0)
printf("%s", separator);
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
va_end(args);
printf("\n");
}
