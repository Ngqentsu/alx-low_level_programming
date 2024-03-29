#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters
 * @...: A variable number of paramters
 * Return: Sum of all parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;

if (n == 0)
return (0);

va_start(list, n);

for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);

return (sum);
}
