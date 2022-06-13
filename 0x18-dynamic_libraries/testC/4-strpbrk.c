#include "main.h"

/**
 * _strpbrk - locates first occurrence of any bytes of  accept in s
 * @s: string to check
 * @accept: string to check against
 *
 * Return: s+i, else 0
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j])
			return (s + i);
	}
		return (0);
}
