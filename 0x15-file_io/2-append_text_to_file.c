#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if fails
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int textLen = 0;
	int writtenBytes;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	textLen = strlen(text_content);
	writtenBytes = write(file_descriptor, text_content, textLen);

	if (writtenBytes == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}
