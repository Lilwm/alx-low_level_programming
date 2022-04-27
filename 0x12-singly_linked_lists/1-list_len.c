#include <stdio.h>
#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	size_t counter = 0;

	while (current_node)
	{
	counter++;
	current_node = current_node->next;
	}
	return (counter);
}

