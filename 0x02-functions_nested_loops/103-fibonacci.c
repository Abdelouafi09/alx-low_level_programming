#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int fb1, fb2, s, sum;

	fb1 = 0;
	fb2 = 1;
	s = 0;
	sum = 0;
	while (s < 4000000)
	{
		s = fb1 + fb2;
		fb1 = fb2;
		fb2 = s;

		if ((s % 2) == 0)
		{
			sum += s;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
