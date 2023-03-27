#include "main.h"
/**
 * swap_int - swaping the values
 * @a: first var
 * @b: second var
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
