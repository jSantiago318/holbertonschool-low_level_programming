
#include "main.h"
#include <string.h>

/**
 * _printf - produces output according to a format string
 * @format: the format string with directives
 *
 * Return: number of characters printed, -1 if format is NULL
 */
int _printf(const char *format, ...)
{
  va_list args;
  int count;
  /*
  * string return_string
  */

  const char *argument_string;

  if (format == NULL)
    return (-1);

  va_start(args, format);
  count = 0;
  argument_string = format;
while (*argument_string)
  {
    /*
     print the normal character without % being in pointer
   */
    if (*argument_string != '%')
    {
      _putchar(*argument_string);
      count++;
    }
    if (*argument_string == '%')
    {
      argument_string++;

      if (*argument_string == 'r')
      {
      return (-1);
      }

      /*
       * %c print a single character
       * /d print a decimal (base 10) number
       * /e print an exponential floating-point number
       * /f print a floating-point number
       * /g print a general-format floating-point number
       * /i print an integer in base 10
       * /o print a number in octal (base 8)
       * /s print a string of characters
       * /u print an unsigned decimal (base 10) number
       * /x print a number in hexidecimal (base 16)
       * %% print a percent sign (\% also works)
       */

      /* VERIFICAR %c*/
      if (*argument_string == 'c')
      {
      count += manager_char(args);
      }
      /* VERIFICAR %s para string >> nested loop*/
      if (*argument_string == 's')
      {
      count += manager_string(args);
      }
      /* VERIFICAR %% para percent sign*/
      if (*argument_string == '%')
      {
      _putchar('%');
      count++;
      }

      /* VERIFICAR si es %d */

      /* VERIFICAR si es %i */
    }
    argument_string++;
  }
  va_end(args);
  return (count);
}
