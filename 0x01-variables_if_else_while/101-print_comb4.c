#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always equal 0 (Success)
 */

int main(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (z = j + 1; z < 10; z++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(z + 48);
				if (i < 7 || j < 8 || z < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar(10);

	return (0);
}
