#include "elf_header.h"

/**
 * check_elf - Checks if a file is an ELF file
 * @e_ident: Array of ELF magic numbers
 */
void check_elf(unsigned char *e_ident)
{
int i = 0;

while (i < 4)
{
if (e_ident[i] != 127 && e_ident[i] != 'E' &&
e_ident[i] != 'L' && e_ident[i] != 'F')
{
fprintf(stderr, "Error: The file is not an ELF file\n");
exit(98);
}
i++;
}
}
