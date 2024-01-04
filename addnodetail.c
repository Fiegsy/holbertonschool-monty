#include "monty.h"

/**
 *addtotail - appens node to tail
 *@tail: tail 
 *data: new value
 *Return: new node
 */

stack_t *addtotail(stack_t **tail, int data)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
       	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = data;
	new_node->prev = *tail;
	new_node->next = NULL;

	if (*tail != NULL)
       	{
		(*tail)->next = new_node;
	}

	*tail = new_node;
	
	return (new_node)
}


