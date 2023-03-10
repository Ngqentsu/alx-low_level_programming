#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: the argument
 * Return: Always 0 (Success)
 */
int main(int argc, int *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
