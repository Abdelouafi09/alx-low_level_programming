#include "main.h"

/**
 * jack_bauer - return all minutes
 *
 *
 *
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 100 % 100; h < 24; h++)
	{
		for (m = 100 % 100; m < 60; m++)
		{
			_putchar(h + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
