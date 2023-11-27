#include "main.h"
#include <string.h>
/**
 * create_file - function creates a file
 * @filename: filename.
 * @text_content: content to be written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int textLen;
	int writtenBytes;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	textLen = strlen(text_content);

	writtenBytes = write(file_descriptor, text_content, textLen);

	if (writtenBytes != textLen)
		return (-1);
	close(file_descriptor);
	return (1);
}
