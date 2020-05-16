#include "monty.h"
/**
 * pop_s -  removes the top element of the stack.
 * @stack: list
 * @line_number: line
 * Return: void
 */
void pop_s(stack_t **stack)
{
	stack_t *tmp;
	int n;

	if (*stack == NULL)
	{
		return;
	}
	else
	{
		tmp = (*stack)->next;
		n = (*stack)->n;
		free(*stack);
		*stack = tmp;
	}
}
