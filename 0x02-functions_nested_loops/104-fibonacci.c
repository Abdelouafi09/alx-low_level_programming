#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	long int fb1, fb2, s;

	fb1 = 1;
	fb2 = 2;

	printf("%lu, %lu", fb1, fb2);
	for (i = 3; i <= 98; i++)
	{
		s = fb1 + fb2;
		printf(", %lu", s);
		fb1 = fb2;
		fb2 = s;
	}
	printf("\n");
	return (0);
}
