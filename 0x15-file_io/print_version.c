#include "elf_header.h"

/**
 * print_version - Prints the version of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_version(unsigned char *e_ident)
{
printf("  Version:                           %d", e_ident[EI_VERSION]);

switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf("current\n");
break;
case EV_NONE:
printf("Invalid version\n");
break;
default:
printf("\n");
break;
}
}
