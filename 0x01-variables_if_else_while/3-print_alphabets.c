#include <stdio.h>
/**
*main -Entry point
*print a-z
*then print A-Z
*Return: return 0 after program execution
*/
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
