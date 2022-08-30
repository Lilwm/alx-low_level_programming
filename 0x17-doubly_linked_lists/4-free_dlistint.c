#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to the head of a linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
