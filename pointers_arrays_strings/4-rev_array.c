#include "main.h"
#include <string.h>

/**
 * reverse_array - prints an array in reverse.
 *
 * @a: pointer.
 *
 * @n: pointer.
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
