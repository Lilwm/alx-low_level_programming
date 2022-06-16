#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: head node
 * @n: node(s) to add
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;	/*allocate memory to the new node*/

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;	/*assign data to the new node*/

	/*point next of newNode to the first node of the doubly linked list*/
	new_node->next = *head;
	new_node->prev = NULL;

	/*point previous of the 1st node(now 2nd) to newNode*/
	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
