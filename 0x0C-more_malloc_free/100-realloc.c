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
char *c;
unsigned int i;

if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
c = malloc(new_size);
if (c != NULL)
return (NULL);
}
if (new_size > old_size && ptr != NULL)
{
c = malloc(new_size);
if (c == NULL)
return (c);
for (i = 0; i < old_size; i++)
{
c[i] = *((char *)ptr + 1);
free(ptr);
}
}
return (c);
}
