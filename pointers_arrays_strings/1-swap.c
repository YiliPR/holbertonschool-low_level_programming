#include "main.h"
#include <string.h>

/**
 * swap_int - swaps the value of the int.
 *
 * @a: pointer.
 *
 * @b: pointer.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
