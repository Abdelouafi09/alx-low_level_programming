#include "main.h"

/**
 * read_textfile - read from a file
 * @filename: the file pointer
 * @letters: the number of char to read from the file
 * Return: the number of read char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1)
	{
		write(STDOUT_FILENO, "bytes written error\n", 20);
		return (0);

	}
	return(bytes_written);
}
