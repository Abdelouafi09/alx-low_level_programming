#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int count1, count2, i, j, z;

	count1 = size - 1;
	count2 = 1;
	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = count1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (z = 0; z < count2; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
			count1--;
			count2++;
		}
	else
		_putchar('\n');
}
