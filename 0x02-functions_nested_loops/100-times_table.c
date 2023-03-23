#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints times tables for n
 *
 * @n: number to print its times table
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (j == 0)
				{
					printf("%d", r);
				}
				else if (r < 10)
				{
					printf(",   %d", r);
				}
				else if (r > 9 && r < 100)
				{
					printf(",  %d", r);
				}
				else
					printf(", %d", r);
			}
			printf("\n");
		}
	}
}
