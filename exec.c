#include "monty.h"

/**
 * execute - Executes the opcode.
 * @content: Line content.
 * @stack: Head linked list - stack.
 * @counter: Line counter.
 * @file: Pointer to Monty file.
 * Return: No return.
 */
void exec(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
        {"push", push},
		{"pall", pall},
		{"pint", pint},


		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (!op || op[0] == '#')
		return;

	monty.arg = strtok(NULL, " \n\t");

	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, counter);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
	fclose(file);
	free(content);
    freeStack(stack);
	exit(EXIT_FAILURE);
}
