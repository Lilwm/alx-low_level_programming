#include <stdio.h>
/**
*main -Entry point
*print a-z
*then print A-Z
*Return: return 0 after program execution
*/
int main(void)
{
int i;
char ch;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
