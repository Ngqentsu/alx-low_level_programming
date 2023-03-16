#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p1, *p2;
unsigned int i;

if (ptr != NULL)
{
p1 = ptr;
}
else
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
p2 = malloc(new_size);
if (p2 != NULL)
{
return (NULL);
}
for (i = 0; i < old_size || i < new_size; i++)
{
*(p2 + i) = p1[i];
}
free(ptr);
return (p2);
}
