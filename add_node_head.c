#include "monty.h"

/**
 * addnewnode - add node to the head stack
 * @head: head of the stack
 * @data: new_value
 * Return: no return
 */
void addnewnode(stack_t **head, int data)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    
    if (new_node == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = data;

    new_node->prev = NULL;

    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }

    new_node->next = *head;

    *head = new_node;
}
