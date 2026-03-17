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
va_list arg_list;
const char *fmt_ptr, *str_ptr, *sep_str;
char char_val;
int num_val;
double float_val;

va_start(arg_list, format);
fmt_ptr = format;
sep_str = "";
while (fmt_ptr && *fmt_ptr)
{
switch (*fmt_ptr)
{
case 'c':
char_val = va_arg(arg_list, int);
printf("%s%c", sep_str, char_val);
sep_str = ", ";
break;
case 'i':
num_val = va_arg(arg_list, int);
printf("%s%d", sep_str, num_val);
sep_str = ", ";
break;
case 'f':
float_val = va_arg(arg_list, double);
printf("%s%f", sep_str, float_val);
sep_str = ", ";
break;
case 's':
str_ptr = va_arg(arg_list, char *);
if (str_ptr == NULL)
str_ptr = "(nil)";
printf("%s%s", sep_str, str_ptr);
sep_str = ", ";
break;
}
fmt_ptr++;
}
va_end(arg_list);
printf("\n");
}
