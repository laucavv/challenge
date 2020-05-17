#ifndef _MONTY_
#define _MONTY_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *next;
} stack_t;


void push_s(stack_t **stack, unsigned int line_number);
void pop_s(stack_t **stack, int valor);
size_t print_listint(stack_t *h);
size_t len_l(stack_t *h);

#endif
