#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: input array to reverse
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int t, i, h;

	h = n / 2;
	for (i = 0; i < h; i++)
	{
		t = a[i];
		a[i] = a[n - 1];
		a[n - 1] = t;
		n--;
	}
}
