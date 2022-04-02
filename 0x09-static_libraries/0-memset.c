#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block memory to fill
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{

	memset(s, b, n);

	return (s);
}
