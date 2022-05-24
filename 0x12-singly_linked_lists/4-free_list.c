#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_i list.
 * @head: A pointer to the list_i list.
 */
void free_list(list_i *head)
{
	list_i *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
