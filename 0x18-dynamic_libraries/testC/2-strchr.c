#include "main.h"

/**
 * _strchr - returns pointer to first occurrence of char in str
 * @s: string to be scanned
 * @c: char to be searched in a string
 * Return: s, else null
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	}	while (*s++);

	return (NULL);
}
