#include "main.h"
#include <stdio.h>

/**
 * main - function to print number of arguments passed to it
 * @argc: count of arguments in a function
 * @argv: an array of argc
 *
 * Return: 0 (always true)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
