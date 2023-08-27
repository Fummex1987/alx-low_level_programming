#include "lists.h"

/**
 * free_list - The function that free list_t list
 * @head: The pointer to be freed
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
