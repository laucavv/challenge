#include "monty.h"
/**
 * push_s - pushes an element to the stack
 * @stack: stack
 * @line_number: line number
 * Return: void
 */
void push_s(stack_t **stack, unsigned int line_number)
{
	stack_t *end_int = NULL, *tmp = NULL;

	end_int = malloc(sizeof(stack_t));

	if (end_int == NULL)
	{
		return;
	}
	end_int->n = line_number;
	if (*stack == NULL)
	{

		*stack = end_int;
		end_int->next =(*stack);


	}
	else
	{
		tmp = *stack;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_int;
		end_int->next = *stack;
	}
	printf("termina push");
}
