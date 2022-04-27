#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new_node;
	list_t *current_node;

	dup = strdup(str);

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)      /*check for empty linked list*/
		*head = new_node;

	current_node = *head;

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	new_node->next = NULL;

	for (len = 0; str[len]; len++)

	new_node->str = dup;
	new_node->len = len;

	return (new_node);
}

