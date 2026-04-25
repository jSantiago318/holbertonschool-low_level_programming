#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: pointer to the head of the list
 * @index: the index of the node to return
 *
 * Return: pointer to the node at index, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
