#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number where the opcode appears.
 */
void swap(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *first = *stack;
    stack_t *second = first->next;

    first->next = second->next;
    if (second->next != NULL)
        second->next->prev = first;

    second->prev = NULL;
    second->next = first;
    first->prev = second;

    *stack = second;
}
