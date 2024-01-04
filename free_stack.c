#include "monty.h"

/**
 * freeStack - Frees nodes in the stack.
 * @head: Pointer to the head of the stack.
 */

void freeStack(stack_t **head)
{
	stack_t *current = *head;
	stack_t *next;

	while (current != NULL)
       	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}

