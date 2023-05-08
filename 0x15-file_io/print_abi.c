#include "elf_header.h"

/**
 * print_abi - Prints the ABI version of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}
