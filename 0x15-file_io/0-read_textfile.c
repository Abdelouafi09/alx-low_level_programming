#include "main.h"
/**
 * read_textfile - display file content to the stdout
 * @filename: file to read
 * @letters: number of letters wanted
 * Return: number of printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor = open(filename, O_RDONLY);
	ssize_t total_letters = 0;
	char character;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	if (file_descriptor == -1)
		return (0);

	while (letters > 0 && (bytes_read =
				read(file_descriptor, &character,
					sizeof(character))) > 0)
	{
		ssize_t bytes_written = write(STDOUT_FILENO, &character, sizeof(character));

		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (0);
		}

		total_letters += bytes_written;
		letters--;

		if (bytes_written < bytes_read)
			break;
	}

	close(file_descriptor);
	return (total_letters);
}
