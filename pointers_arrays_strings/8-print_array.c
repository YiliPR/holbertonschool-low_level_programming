#include "main.h"

/**
 * print_array - print the array.
 * @a: pointer.
 * @n: variable given.
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		if (s == 0)
			printf("%d", a[s]);

		else
			printf(", %d", a[s]);
	}
	printf("\n");
}
