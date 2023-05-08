#include "elf_header.h"

/**
 * print_magic - Prints the magic numbers of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_magic(unsigned char *e_ident)
{
int j = 0;

printf("  Magic:   ");

while (j < EI_NIDENT)
{
printf("%02x", e_ident[j]);
if (j == EI_NIDENT - 1)
{
printf("\n");
}
else
{
printf(" ");
}
j++;
}
}
