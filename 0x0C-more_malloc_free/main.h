#ifndef main_H
#define main_H
#include <stdlib.h>
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif
