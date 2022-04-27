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
	size_t nodes_counter = 0;
	const list_t *current_node = h;

	while (current_node)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n ", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		nodes_counter++;
	}
	return (nodes_counter);
}

