#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @head: The pointer to the node to be deleted
 * @index: The index of the node to be deleted
 *
 * Return: 1 on success and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
