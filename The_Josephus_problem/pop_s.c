#include "monty.h"
/**
 * pop_s -  removes the top element of the stack.
 * @stack: list
 * @line_number: line
 * Return: void
 */
void pop_s(stack_t **head,int valor)
{
	unsigned int i = 0;
	int j = 1;
	stack_t *tmp = NULL, *aux = NULL, *end = NULL;

	tmp = *head;
	end = *head;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	while (end->next != (*head))
	{
		end = end->next;
	}

	while (j <= len_l(*head))
	{
		if (j == 1 && tmp->n == valor)
		{
			*head = tmp->next;
			end->next = *head;
			printf("Dead: %d\n", tmp->n);
			free(tmp);
		}
		else if (tmp->n == (valor - 1) && j < len_l(*head) && j != 1)
		{

				aux = tmp->next;
				tmp->next = aux->next;
				printf("Dead: %d\n", aux->n);
				free(aux);
		}

		j++;
		tmp = tmp->next;

		
	}
}
