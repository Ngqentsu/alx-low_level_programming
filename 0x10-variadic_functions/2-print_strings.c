#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: The string to be printed
 * @n: The number of strings
 * @...: A variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *str;

va_start(strings, n);
for (i = 0; i < n; i++)
{
str = va_arg(strings, char *);
if (str)
printf("%s", str);
else
printf("nil");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
