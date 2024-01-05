#include "monty.h"

monty_t monty = {NULL, NULL, NULL, 0};

/**
 * main - Interpreter code of monty
 * @argc: number of arg
 * @argv: Monty file emplacement
 * Return: 0 in success
 */

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    FILE *file = fopen(argv[1], "r");
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    stack_t *stack = NULL;
    unsigned int counter = 0;
    char *content = NULL;
    size_t size = 0;
    ssize_t read_line;

    while ((read_line = getline(&content, &size, file)) != -1)
    {
        counter++;
        monty.file = file;
        monty.content = content;

        if (read_line > 0)
        {
            exec(content, &stack, counter, file);
        }

        
        free(content);
        content = NULL;
    }

    freeStack(&stack);
    fclose(file);
    free(content);

    return 0;
}
