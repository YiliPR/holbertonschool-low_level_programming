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
 * add_node_end - adds a node at the end.
 *
 * @head: pointer.
 *
 * @str: pointer.
 *
 * Return: value of the value of the node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = str_len(str);
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
