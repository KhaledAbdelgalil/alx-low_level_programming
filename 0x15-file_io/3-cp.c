#include "main.h"
#include <stdio.h>
/**
 * handle_errors - function checks if files can be opened
 * (i.e handle errors in reading files)
 * and return files descriptors if everything is ok.
 * @argv: arguments vector.
 * Return: files descriptors.
 */
files handle_errors(char *argv[])
{
	files o;

	o.file_read = open(argv[1], O_RDONLY);
	o.file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (o.file_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (o.file_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (o);
}

/**
 * main - program copies from file to another.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 if sucess, exit if failures
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t readBytes = 1024, writeBytes;
	char buffer[BufferWidth];
	files descriptors;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	descriptors = handle_errors(argv);
	file_from = descriptors.file_read, file_to = descriptors.file_write;
	while (readBytes == 1024)
	{
		readBytes = read(file_from, buffer, BufferWidth);
		if (readBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeBytes = write(file_to, buffer, readBytes);
		if (writeBytes != readBytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
