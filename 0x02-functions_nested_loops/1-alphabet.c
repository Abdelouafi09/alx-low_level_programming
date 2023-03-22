#include <unistd.h>

/**
 * print_alphabet - Display alphabet in lowercase
 *
 * Return; Always nothing (Success)
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
