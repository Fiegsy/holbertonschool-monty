#include "monty.h"

/**
 *add - adds the top two elements of the stack
 *@stack: pointer to top of stack
 *@line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	if(!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: : can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	int res;
	stack_t *temp;

	res = (*stack)->n + (*stack)->next->n;

	temp = *stack;
	(*stack) = (*stack)->next;
	free(temp);

	(*stack)->n = res;
}
