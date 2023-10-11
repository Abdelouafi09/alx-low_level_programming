#include "main.h"
#include <stdio.h>
/**
 * _close - close the fd created and handle errors
 * @fd_read: file descriptor of the file read from
 * @fd_write: file descriptor the write to
 */

void _close(int fd_read, int fd_write)
{
	int close_stat;

	close_stat = close(fd_read);
	if (close_stat == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	close_stat = close(fd_write);
	if (close_stat == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
}

/**
 * main - copy the content of a file to the other
 * @ac: args count
 * @av: args vector
 * Return: always 0.
 */
int main(int ac, char **av)
{
	int fd_read, fd_write;
	char buffer[1024];
	ssize_t bytes_read, bytes_write;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_read = open(av[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_write = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	bytes_read = -1;
	while (bytes_read != 0)
	{
		bytes_read = read(fd_read, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		bytes_write = write(fd_write, buffer, bytes_read);
		if (bytes_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	_close(fd_read, fd_write);
	return (0);
}
