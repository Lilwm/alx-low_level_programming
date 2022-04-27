#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup;
	int len;

	new_node = (list_t *) malloc(sizeof(list_t));	/* allocate size to the new node*/
	
	if (new_node == NULL)
		return(NULL);
	
	dup = strdup(str);
	
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	for (len = 0; str[len]; len++)
	
	/* make new node head*/
	new_node ->str = dup;
	new_node ->len = len;
	new_node ->next = *head;

	*head = new_node;

	return (new_node);
}

