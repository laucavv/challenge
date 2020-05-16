#include "monty.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h:list
 * Return: the number of nodes
 */

size_t print_listint(stack_t *h)
{
	size_t length = 0;
	stack_t *tmp = h;

	do
	{
		printf("%d", tmp->n);
		tmp = tmp->next;
		length++;
	}while (tmp != h);
	printf("\n");

	return (length);
}
