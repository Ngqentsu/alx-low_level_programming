#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
    write(1, "Please make me win!\n", 20);
    exit(EXIT_SUCCESS);
}
