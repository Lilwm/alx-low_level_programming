#include "main.h"
#include <stdio.h>
/**
 * main - function to print all arguments received
 * @argc: count of arguments
 * @argv: an array of argc
 * Return: 0 - always success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
