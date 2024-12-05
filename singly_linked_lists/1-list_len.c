#include "lists.h"

/**
 * list_len - length of the list.
 * @h: pointer.
 * Return: Value of len.
 */

size_t list_len(const list_t *h)
{
	size_t lon = 0;

	while (h != NULL)
	{
		lon++;
		h = h->next;
	}

	return (lon);
}
