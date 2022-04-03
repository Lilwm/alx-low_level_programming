#include "main.h"
#include <stdio.h>


/**
 * main - program to print the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 always true
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[(argc - argc)]);

	return (0);
}
