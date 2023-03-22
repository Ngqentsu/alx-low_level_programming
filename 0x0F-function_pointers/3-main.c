#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - contain your main function
 * @argc: The number of arguments
 * @argv: An array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int arg1, arg2, result;
char *op;
int (*func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

arg1 = atoi(argv[1]);
op = argv[2];
arg2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((*op == '/' || *op == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}
result = func(arg1, arg2);
printf("%d\n", result);
return (0);
}
