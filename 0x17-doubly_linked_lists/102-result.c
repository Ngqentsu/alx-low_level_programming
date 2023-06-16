#include "lists.h"

/**
 * is_palindrome - checks if a number is palindrome
 * @n: the number
 * REturn: 1 if the number is a palindrome and 0 otherwise
 */
int is_palindrome(int n)
{
int rev = 0, num = n;

while (n != 0)
{
rev = rev * 10 + n % 10;
n /= 10;
}

num = rev;

return (num);
}

int main(void)
{
int largest = 0;
int i, j, prod;

for (i = 100; i < 1000; i++)
{
for (j = 100; j < 1000; j++)
{
prod = i * j;
if (is_palindrome(prod) && prod > largest)
{
largest = prod;
}
}
}

FILE *fp = fopen("102-result", "w");
fprintf(fp, "%d", largest);
fclose(fp);

return (0);
}
