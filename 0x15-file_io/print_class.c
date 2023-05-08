#include "elf_header.h"

/**
 * print_class - Prints the class of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_class(unsigned char *e_ident)
{
printf("  Class:                             ");

switch (e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
case ELFCLASSNONE:
printf("Invalid class\n");
break;
default:
printf("unknown: %x\n", e_ident[EI_CLASS]);
}
}
