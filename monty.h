#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_t
{
	int n;
	struct stack_t *prev;
	struct stack_t *next;
} stack_t;

/**
 * struct monty_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: change stack
 * Description: monty program
 */
typedef struct monty_t
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  monty_t;
extern monty_t monty;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void addnewnode(stack_t **head, int data);
stack_t *addtotail(stack_t **tail, int data);
void freeStack(stack_t **head);
void pint(stack_t **stack, unsigned int line_number);
void exec(char *content, stack_t **stack, unsigned int counter, FILE *file);
void push(stack_t **head, unsigned int count);
void pall(stack_t **head, unsigned int count);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);


#endif
