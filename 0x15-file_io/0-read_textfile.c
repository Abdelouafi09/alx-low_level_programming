#include "main.h"
/**
 * read_textfile - display file content to the stdout
 * @filename: file to read
 * @letters: number of letters wanted
 * Return: number of printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	ssize_t total_letters = 0;
	ssize_t bytes_read;
	int file_descriptor = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (file_descriptor == -1)
		return (0);

	while (letters > 0 &&
			(bytes_read = read(file_descriptor, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytes_to_write = (bytes_read < letters) ? bytes_read : letters;
		ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);

		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (0);
		}

		total_letters += bytes_written;
		letters -= bytes_written;

		if (bytes_written < bytes_read)
			break;
	}

	close(file_descriptor);
	return (total_letters);
}

