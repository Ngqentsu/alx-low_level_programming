#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, int *argv[])
{
(void) argc;
printf("%d\n", *argv[0]);
return (0);
}
