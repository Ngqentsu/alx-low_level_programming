#include "elf_header.h"

/**
 * close_elf - Closes an ELF file
 * @elf: the file
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
fprintf(stderr, "Error: Can't close fd %d\n", elf);
exit(98);
}
}
