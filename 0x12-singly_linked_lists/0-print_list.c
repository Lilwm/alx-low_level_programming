#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements in a node
 * @h: the list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		return (print_list(h->next) + 1);
	}
	return (0);
}

