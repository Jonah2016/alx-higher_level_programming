#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
*/
int main(void)
{
	list_int_txt *head;
	list_int_txt *current;
	list_int_txt *temp;
	int i;

	head = NULL;
	node_int_adder(&head, 0);
	node_int_adder(&head, 1);
	node_int_adder(&head, 2);
	node_int_adder(&head, 3);
	node_int_adder(&head, 4);
	node_int_adder(&head, 98);
	node_int_adder(&head, 402);
	node_int_adder(&head, 1024);
	list_int_printer(head);

	if (cycle_checker(head) == 0)
		printf("Linked list has no cycle\n");
	else if (cycle_checker(head) == 1)
		printf("Linked list has a cycle\n");

	current = head;
	for (i = 0; i < 4; i++)
		current = current->next;
	temp = current->next;
	current->next = head;

	if (cycle_checker(head) == 0)
		printf("Linked list has no cycle\n");
	else if (cycle_checker(head) == 1)
		printf("Linked list has a cycle\n");

	current = head;
	for (i = 0; i < 4; i++)
		current = current->next;
	current->next = temp;

	list_int_freer(head);

	return (0);
}
