#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * check_num - check if string is a digit
 * @s: string
 * Return: Always 0 (Success)
 */
int check_num(char *s)
{
unsigned int i;

for (i = 0; i < strlen(s); i++)
{
if (!isdigit(s[i]))
{
return (0);
}
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: argument count
 * @argv: the argument
 * Return: Always 0 (Success)
 */
int main(int argc, int *argv[])
{
int i, str_to_int, sum = 0;

for (i = 1; i < argc; i++)
{
if (check_num(argv[i]))
{
str_to_int = atoi(argv[i]);
sum += str_to_int;
}
else
printf("Error\n");
return (1);
}
printf("%d\n", sum);
return (0);
}
