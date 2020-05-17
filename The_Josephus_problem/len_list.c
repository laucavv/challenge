#include "monty.h"

/**
 * listint_len - returns the number of elements in a linked
 * @h:list
 * Return: the number of nodes
 */

size_t len_l(stack_t *h)
{
	size_t length = 0;
	stack_t *tmp = h;

	do
	{
		tmp = tmp->next;
		length++;
	}while (tmp != h);
	return (length);
}
