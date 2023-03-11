#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: the argument
 * Return: 1 for Error and 0 for Success
 */
int main(int argc, int *argv[])
{
int result,  a, b;

if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);
return (0);
}
else
printf("Error\n");
return (1);
}
