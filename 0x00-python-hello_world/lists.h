#ifndef LISTS_HEAD
#define LISTS_HEAD

#include <stdlib.h>

/**
 * struct list_int_str - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_int_str
{
	int n;
	struct list_int_str *next;
} list_int_txt;

size_t list_int_printer(const list_int_txt *h);
list_int_txt *node_int_adder(list_int_txt **head, const int n);
void list_int_freer(list_int_txt *head);
int cycle_checker(list_int_txt *list);

#endif /* LISTS_HEAD */
