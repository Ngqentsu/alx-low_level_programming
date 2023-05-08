#include "elf_header.h"

/**
 * print_type - Prints the type of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
printf("  Type:                              ");

if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

switch (e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("unknown: %x\n", e_type);
}
}
