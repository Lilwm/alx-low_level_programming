#include <stdio.h>
/**
*main -Entry point
*print a-z
*then print A-Z
*Return: return 0 after program execution
*/
int main(void)
{
int ch = 97;
while (ch <= 122)
{
if(!(ch == 101 || ch == 113)){
putchar(ch);
}	
ch++;
}
putchar('\n');
return (0);
}

