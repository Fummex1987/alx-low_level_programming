#include "lists.h"

/**
 * get_nodeint_at_index -  the nth node of a listint_t linked list
 * @head: The pointer to the next node
 * @index: The index of the node to return
 *
 * Return: Return the nth node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
