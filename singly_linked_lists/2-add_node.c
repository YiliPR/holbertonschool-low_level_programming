#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the front of the list.
 *
 * @head: pointer.
 *
 * @str: pointer.
 *
 * Return: value of the newnode.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
