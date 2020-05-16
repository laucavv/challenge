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

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct own_monty_s - finds each file
 * @buffer: buffer
 * @each_file: looks for each file
 * @num: number
 * Description: search structure
 */
typedef struct own_monty_s
{
	char *num;
	char *buffer;
	FILE *each_file;
} own_monty_t;

extern own_monty_t mont;
void (*gt(stack_t **head, char *s, unsigned int l))(stack_t **stack, unsigned int ln);
void push_s(stack_t **stack, unsigned int line_number);
void pall_s(stack_t **stack, unsigned int line_number);
void pint_s(stack_t **stack, unsigned int line_number);
void pop_s(stack_t **stack, unsigned int line_number);
void swap_s(stack_t **stack, unsigned int ln);
void add_s(stack_t **stack, unsigned int ln);
void nop_s(stack_t **stack, unsigned int ln);
void sub_s(stack_t **stack, unsigned int ln);
void div_s(stack_t **stack, unsigned int ln);
void mul_s(stack_t **stack, unsigned int ln);
void mod_s(stack_t **stack, unsigned int ln);
void pchar_s(stack_t **stack, unsigned int ln);
void pstr_s(stack_t **stack, unsigned int ln);
void rotl_s(stack_t **stack, unsigned int ln);
size_t print_listint(const stack_t *h);
int is_number();
void open_f(char *file_name);
int read_f(void);
void close_f(void);
void exe_line(void);
void free_s(stack_t *head);

#endif
