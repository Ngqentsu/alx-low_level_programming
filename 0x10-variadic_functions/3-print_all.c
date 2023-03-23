#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
va_list list;
int i = 0, j = 0, k = 0;
char *str;
const char a_arg[] = "cifs";

va_start(list, format);

while (format && format[i])
{
while (a_arg[j])
{
if (format[i] == a_arg[j] && k)
{
printf(",");
break;
}
j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(list, int), k = 1);
break;
case 'i':
printf("%d", va_arg(list, int), k = 1);
break;
case 'f':
printf("%d", va_arg(list, int), k = 1);
break;
case 's':
str = va_arg(list, char *), k = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
i++;
}
printf("\n");
va_end(list);
}
