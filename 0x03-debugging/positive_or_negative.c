#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
*main -Entry point
*Positive negative while task
*Return: return 0 after program execution
*/
void positive_or_negative(int n)
{

if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is zero\n", n);
/*return (0);*/
}
