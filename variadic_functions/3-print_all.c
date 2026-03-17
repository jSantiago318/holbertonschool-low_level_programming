#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on a format string
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *f;
char *str;
const char *sep;
char c;
int n;
double fl;

va_start(args, format);
f = format;
sep = "";
while (f && *f)
{
switch (*f)
{
case 'c':
c = va_arg(args, int);
printf("%s%c", sep, c);
sep = ", ";
break;
case 'i':
n = va_arg(args, int);
printf("%s%d", sep, n);
sep = ", ";
break;
case 'f':
fl = va_arg(args, double);
printf("%s%f", sep, fl);
sep = ", ";
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
sep = ", ";
break;
}
f++;
}
va_end(args);
printf("\n");
}
