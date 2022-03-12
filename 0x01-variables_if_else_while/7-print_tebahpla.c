#include <stdio.h>
/**
*main -Entry point
*print a-z
*Return: return 0 after program execution
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
