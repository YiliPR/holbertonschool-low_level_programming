#include "main.h"

/**
 *
 *
 *
 */

int _abs(int n)
{
	int valor_absoluto;

	if (n < 0)
	{
		valor_absoluto = n * -1;
		return (valor_absoluto);
	}
	return (n);
}
