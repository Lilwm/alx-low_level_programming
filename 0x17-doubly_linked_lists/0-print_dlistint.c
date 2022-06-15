#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function to print all elements in a linked list
 * @h: pointer to the head node 
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count ++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}

