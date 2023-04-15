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
printf(STDERR_FILENO, "Error: The file is not an ELF file\n");
exit(98);
}
i++;
}
}

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

/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_osabi(unsigned char *e_ident)
{
printf("  OS/ABI:                            ");

switch (e_ident[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - Hewlett-Packard HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Sun Solaris\n");
break;
case ELFOSABI_AIX:
printf("UNIX - AIX\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - Compaq TRU64\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone\n");
break;
default:
printf("unknown: %x\n", e_ident[EI_OSABI]);
}
}

/**
 * print_abi - Prints the ABI version of an ELF header
 * @e_ident: Array of ELF magic numbers
 */
void print_abi(unsigned char *e_ident)
{
printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

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
else
printf("%#lx\n", e_entry);
}

if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}

/**
 * close_elf - Closes an ELF file
 * @elf: the file
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
printf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
exit(98);
}
}

/**
 * main - display the info in the ELF header
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 Always (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *elf_header;
int op, rd;

op = open(argv[1], O_RDONLY);
rd = read(op, header, sizeof(Elf64_Ehdr));
elf_header = malloc(sizeof(Elf64_Ehdr));

if (op == -1 || rd == -1)
{
printf(STDERR_FILENO, "Error: The file does not exist %s\n", argv[1]);
free(elf_header);
close_elf(op);
exit(98);
}

if (elf_header == NULL)
{
close_elf(op);
printf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
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
print_entry((*elf_header).e_entry, (*header).e_ident);

free(elf_header);
close_elf(op);
return (0);
}
