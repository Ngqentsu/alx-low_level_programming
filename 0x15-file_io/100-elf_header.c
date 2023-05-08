#include "elf_header.h"
#include "close_elf.c"
#include "check_elf.c"
#include "print_magic.c"
#include "print_class.c"
#include "print_data.c"
#include "print_version.c"
#include "print_osabi.c"
#include "print_abi.c"
#include "print_type.c"
#include "print_entry.c"

/**
 * main - display the info in the ELF header
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr *elf_header;
int op, rd;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
exit(1);
}

op = open(argv[1], O_RDONLY);
if (op == -1)
{
fprintf(stderr, "Error: The file cannot be opened %s\n", argv[1]);
}

elf_header = malloc(sizeof(Elf64_Ehdr));
rd = read(op, elf_header, sizeof(Elf64_Ehdr));

if (rd == -1)
{
fprintf(stderr, "Error: Cannot read file %s\n", argv[1]);
free(elf_header);
close_elf(op);
exit(98);
}

if (elf_header == NULL)
{
close_elf(op);
fprintf(stderr, "Error: The file does not exist %s\n", argv[1]);
exit(98);
}

check_elf((*elf_header).e_ident);
printf("ELF Header:\n");
print_magic((*elf_header).e_ident);
print_class((*elf_header).e_ident);
print_data((*elf_header).e_ident);
print_version((*elf_header).e_ident);
print_osabi((*elf_header).e_ident);
print_abi((*elf_header).e_ident);
print_type((*elf_header).e_type, (*elf_header).e_ident);
print_entry((*elf_header).e_entry, (*elf_header).e_ident);

free(elf_header);
close_elf(op);
return (0);
}
