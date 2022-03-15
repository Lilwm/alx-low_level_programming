#include "main.h"
/**
 *main-entry point
 * _putchar - writes the character c to stdout
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)

{
	char *s = "_putchar";	/* define putchar*/

	while (*s != '\0')
	{_putchar(*s);
	s++;
	}

	_putchar('\n');
	return (0);
}

