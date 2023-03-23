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
int i;
char *str;
char *spc = "";

va_start(list, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", spc, va_arg(list, int));
break;
case 'i':
printf("%s%d", spc, va_arg(list, int));
break;
case 'f':
printf("%s%d", spc, va_arg(list, int));
break;
case 's':
str = va_arg(list, char *);
if (!str)
printf("(nil)");
printf("%s", str);
break;
default:
i++;
continue;
}
spc = ",";
i++;
}
}
printf("\n");
va_end(list);
}
