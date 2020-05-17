#include "monty.h"
/**
 * main - main function
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

	printf("Enter the number of people\n ---> ");
	getline(&line, &len, stdin);
	printf("Enter position to kill\n ---> ");
	getline(&num,&len2, stdin);

	while (i <= atoi(line))
	{
		push_s(&(head), i);
		i++;
	}
	print_listint(head);
	tmp = head;

	read = len_l(head);
	while(read > 1)
	{
		if (k == atoi(num))
		{
			pop_s(&(head), head->n);
			k = 1;
			read -= 1;
		}
		k++;
		head = head->next;
		if (head->n == 0)
		{	head = head->next;
			k++;
		}
			
	}
	if (read == 1)
	{
		printf("The position where it should be is: %d\n", head->n);
	}


	if (line == NULL)
	{
		printf("vacio");
	}


	return (0);
}
