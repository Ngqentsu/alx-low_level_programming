#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, count, result;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
count = atoi(argv[1]);
result = 0;

if (count < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && count >= 0; i++)
{
while (count >= coins[i])
{
result++;
count -= coins[i];
}
}
printf("%d\n", result);
return (0);
}
