#include <stdio.h>
/**
 *main-entry point
 * _putchar - writes the character c to stdout
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)

{
	char *c = "_putchar";	/* define putchar*/
	unsigned long i;
	{
	for (i = 0; i <= sizeof(c); i++)
	putchar(c[i]);
	}
	putchar('\n');	/*new line at the end of function8*/

return (0);

}
