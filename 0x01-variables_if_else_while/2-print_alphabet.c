#include <stdio.h>
/**
 * main -entry point
 *prints a-z
 * Return 0 after executing the program
 */

int main(void)
{
int ch;

for (ch = 0; ch < 26; ch++)
putchar(97 + ch);
putchar('\n');
return (0);
}
