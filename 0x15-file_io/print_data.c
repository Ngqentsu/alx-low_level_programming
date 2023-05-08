#include "elf_header.h"

/**
 * print_data - Prints the data of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_data(unsigned char *e_ident)
{
printf("  Data:                              ");

switch (e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
case ELFDATANONE:
printf("Invalid data encoding\n");
break;
default:
printf("unknown: %x\n", e_ident[EI_CLASS]);
}
}
