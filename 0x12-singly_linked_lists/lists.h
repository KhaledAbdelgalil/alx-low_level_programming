#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned int u_int;
/**
 * struct singly_linked_list - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct singly_linked_list
{
	char *str;
	u_int len;
	struct singly_linked_list *next;
} list_t;

size_t print_list(const list_t *h);

#endif
