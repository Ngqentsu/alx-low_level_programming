#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: the argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("argv[%d] = %s\n", i, argv[i]);
return (0);
}
