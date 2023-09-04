#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_int_printer - prints all elements of a list_int_txt
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t list_int_printer(const list_int_txt *h)
{
	const list_int_txt *current;
	unsigned int n; /* number of nodes */

	current = h;
	n = 0;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}

/**
 * node_int_adder - adds a new node at the beginning of a list_int_txt 
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
 */
list_int_txt *node_int_adder(list_int_txt **head, const int n)
{
	list_int_txt *new;

	new = malloc(sizeof(list_int_txt));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * list_int_freer - frees a list_int_txt list
 * @head: pointer to list to be freed
 * Return: void
 */
void list_int_freer(list_int_txt *head)
{
	list_int_txt *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
