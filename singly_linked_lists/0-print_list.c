#include "lists.h"

/**
 * print_list - prints the list of the nodes.
 *
 * @h: pointer.
 *
 * Return: value of the node.
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		num++;
		h = h->next;
	}
	return (num);
}
