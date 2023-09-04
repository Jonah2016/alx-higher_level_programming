#include "lists.h"
#include <stdio.h>

/**
 * cycle_checker - checks if singly linked list is a cycle or not
 * Return: 0 if no cycle, 1 is yes
*/
int cycle_checker(list_int_txt *list)
{
	list_int_txt *fast = list;
	list_int_txt *slow = list;

	if (!list)
		return (0);

	while (1)
	{
		/*traverse through nodes as long as linked list node exists*/
		if (fast->next != NULL && fast->next->next != NULL)
		{
			fast = fast->next->next;
			slow = slow->next;

			if (fast == slow) /*if nodes match, cycle found*/
				return (1);
		}
		else
			return (0);
	}

}
