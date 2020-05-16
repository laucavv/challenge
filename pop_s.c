#include "monty.h"
/**
 * pop_s -  removes the top element of the stack.
 * @stack: list
 * @line_number: line
 * Return: void
 */
void pop_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*stack = tmp->next;
	free(tmp);
}
