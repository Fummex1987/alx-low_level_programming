#include "lists.h"

/**
 * print_list - Print all the elements of list_t list
 * @h: single linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
