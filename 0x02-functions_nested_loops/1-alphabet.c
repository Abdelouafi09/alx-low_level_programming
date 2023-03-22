#include <unistd.h>

/**
 * print_alphabet - Display alphabet in lowercase
 *
 * Return; Always nothing (Success)
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 122; i++)
		_putchar(i);
	_putchar(10);
}
