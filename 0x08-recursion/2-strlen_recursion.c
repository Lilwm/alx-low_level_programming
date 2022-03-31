#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string to check
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
