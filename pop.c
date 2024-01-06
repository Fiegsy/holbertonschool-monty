#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to top of the stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if(!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	stack_t *temp;

	temp = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;

	free(temp);
}
