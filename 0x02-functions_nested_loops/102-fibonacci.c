#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long int fb1, fb2, s;

	fb1 = 0;
	fb2 = 1;
	for (i = 0; i < 50; i++)
	{
		s = fb1 + fb2;
		fb1 = fb2;
		fb2 = s;
		if (i == 0)
			printf("%lu", s);
		else
			printf(", %lu", s);
	}
	printf("\n");
	return (0);
}
