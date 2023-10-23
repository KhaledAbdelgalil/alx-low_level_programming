#ifndef MAIN_H
#define MAIN_H
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char*, char*);
void print_chessboard(char (*a)[8]);
void _putchar(char);
#endif /* MAIN_H */
