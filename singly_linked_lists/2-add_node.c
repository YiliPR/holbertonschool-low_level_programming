#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_len - finds the length of the string.
 *
 * @str: pointer.
 *
 * Return: value of the length of the string.
 */

int str_len(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

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
	newnode->len = str_len(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
