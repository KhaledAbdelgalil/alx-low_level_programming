#include "main.h"

/**
 * read_textfile - function reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters to read.
 *
 * Return: numbers of letters written to stdout. if it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t readBytes = 0, writeBytes = 0;
	char *buffer;

	if (!filename)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	readBytes = read(file_descriptor, buffer, letters);
	writeBytes = write(STDOUT_FILENO, buffer, readBytes);
	close(file_descriptor);
	free(buffer);
	return (writeBytes);
}
