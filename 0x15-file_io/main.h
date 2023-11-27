#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define BufferWidth 1024
/**
 * struct files - struct that holds file descriptors
 * @file_read: descriptor for read file
 * @file_write: descriptor for write file
 *
 * Description: struct called "files" that holds
 * files descriptors
 */
typedef struct files
{
	int file_read;
	int file_write;
} files;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
