#include "elf_header.h"

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
