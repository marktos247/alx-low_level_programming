#include "lists.h"

/**
 * get_dnodeint_at_index -A fxn that returns d nth node of
 * a dlistint_t linked list
 * @head: pointer to head of the list
 * @index: the index of the node, starting from 0
 * Return: the node or NULL if the node does not exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
