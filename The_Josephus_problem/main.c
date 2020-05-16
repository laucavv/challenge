#include "monty.h"
own_monty_t mont = {NULL, NULL, NULL};
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */

int main()
{
	char *line = NULL;
	char *num = NULL;
	size_t len = 0, len2 = 0;
	size_t read = 0;
	stack_t *head = NULL;
	unsigned int i = 1;

	printf("Enter the number people\n ---> ");
	getline(&line, &len, stdin);
	printf("Enter the number kill\n ---> ");
	getline(&num,&len2, stdin);

	while (i <= atoi(line))
	{
		push_s(&(head), i);
		i++;
	}
	//print_listint(head);

	if (line == NULL)
	{
		printf("vacio");
	}


	return (0);
}
