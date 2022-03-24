
#include "main.h"
/**
 * string_toupper - changes the string lowercase letters to caps.
 * @n: character string
 * Return: n.
 */


char *string_toupper(char *n)
{
	int i = 0;	/* counter for the loop*/


	while (n[i] != '\0')	/*loop takes one char at a time*/
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}

	return (n);
}
