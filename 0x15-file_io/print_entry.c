#include "elf_header.h"

/**
 * print_entry - Prints the entry point of an ELF header
 * @e_entry: ELF entry point
 * @e_ident: Array of ELF magic numbers
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf("  Entry point address:               ");

if (e_ident[EI_CLASS] == ELFCLASS32)
{
printf("%#x\n", (unsigned int)e_entry);
}
else
printf("%#lx\n", e_entry);

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
}
