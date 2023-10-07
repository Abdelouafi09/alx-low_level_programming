#include "main.h"

/**
 * read_textfile - creates file and writes in it
 * @filename: the file pointer
 * @letters: the number of char to read from the file
 * Return: the number of read char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_written;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	b_read = read(fd, buff, letters);
	if (b_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	b_written = write(STDOUT_FILENO, buff, b_read);
	if (b_written == -1 || b_written != b_read)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (b_written);
}
