#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the creat_file function
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int result;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	result = create_file(av[1], av[2]);
	dprintf(1, "-> %d)\n", result);
	return (0);
}
