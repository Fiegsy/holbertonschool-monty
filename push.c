#include "monty.h"
/**
 * push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: no return
*/

void push(stack_t **head, unsigned int count)
{
	int n, j = 0, flag = 0;

	if (monty.arg)
	{
		if (monty.arg[0] == '-')
			j++;
		for (; monty.arg[j] != '\0'; j++)
		{
			if (monty.arg[j] > 57 || monty.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(monty.file);
			free(monty.content);
			freeStack(head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(monty.file);
		free(monty.content);
		freeStack(head);
		exit(EXIT_FAILURE); }
	n = atoi(monty.arg);
	if (monty.lifi == 0)
		addnewnode(head, n);
	else
		addtotail(head, n);
}