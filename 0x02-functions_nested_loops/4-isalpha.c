#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * Return: 1 (Success).
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
