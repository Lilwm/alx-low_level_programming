#include "main.h"
/*
 * int _isalpha - shows if a char is an alphabet
 *
 * return: 1 if c is an alphabet else, 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
