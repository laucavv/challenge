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
	int read = 0;
	stack_t *head = NULL, *tmp = NULL;
	unsigned int i = 1, k = 1;

	printf("Enter the number people\n ---> ");
	getline(&line, &len, stdin);
	printf("Enter the number kill\n ---> ");
	getline(&num,&len2, stdin);

	while (i <= atoi(line))
	{
		push_s(&(head), i);
		i++;
	}
	print_listint(head);
	tmp = head;

	read = len_l(head);
	printf("tamaño lista: %d\n", read);

	/**while(read > 1)
	{printf("primer while\n");
		if (k == atoi(num))
		{
			pop_s(&(head));
			k = 1;
			read -= 1;
			head = tmp;
		}
		k++;
		head = head->next;
	}
	if (read == 1)
	{
		printf("termino");
	}*/


	if (line == NULL)
	{
		printf("vacio");
	}


	return (0);
}
