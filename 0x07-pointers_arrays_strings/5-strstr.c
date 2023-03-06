#include "main.h"

/**
 * *_strstr - locates a substring
 * @needle: the substring
 * @haystack: the string
 * Return: pointer to the substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;

if (*needle == 0)
{
return (haystack);
}

while (*haystack)
{
if (haystack[i] == needle[i])
{
while (haystack[i] == needle[i])
{
if (needle[i + 1] == '\0')
return (haystack);
i++;
}
}
haystack++;
}
return ('\0');
}
