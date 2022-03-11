#include <stdio.h>
/**
*main -Entry point
*a-z task
*Return: return 0 after program execution
*/

int main(void)
{
int ch;

for (ch = 0; ch < 26; ch++)
putchar(97 + ch);
putchar('\n');
return (0);
}
