
#  Interpreter for Monty ByteCodes files
Stacks, Queues - LIFO, FIFO




## Description

This project aims to create an interpreter specifically designed for Monty bytecode files. These files, identified by the .m extension, contain Monty bytecode instructions executed by the interpreter.


##  Compilation
The compilation should be done using the following command:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty



## Requirements
The allowed editors are vi, vim, and emacs.

The files will be compiled on Ubuntu 20.04 LTS using gcc with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89.

Every file in the project should end with a new line.

It is mandatory to have a README.md file at the root of the project folder.

The code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.

Each file should contain no more than 5 functions.

No more than one global variable should be used







## Usage/Examples

For push opcode and pall opcode:

    cat -e bytecodes/00.m
    push 1$
    push 2$
    push 3$
    pall$
    ./monty bytecodes/00.m
    3
    2
    1

For pint opcode:

    cat bytecodes/06.m
    push 1
    pint
    push 2
    pint
    push 3
    pint
    ./monty bytecodes/06.m
    1
    2
    3

For pop opcode:

    cat bytecodes/07.
    push 1
    push 2
    push 3
    pall
    pop
    pall
    pop
    pall
    pop
    pall
    ./monty bytecodes/07.m
    3
    2
    1
    2
    1
    1





## Error handling

If no file or more than one argument is provided, the program displays:

USAGE: monty file

and exits with status EXIT_FAILURE.

If the file cannot be opened, the program displays:

Error: Can't open file <file>

and exits with status EXIT_FAILURE.

If an invalid instruction is encountered, the program displays:

L<line_number>: unknown instruction <opcode>

and exits with status EXIT_FAILURE.

If the program encounters a critical memory allocation error, it displays:

Error: malloc failed

and exits with status EXIT_FAILURE.

## Authors

Yassine Daoui

Leila Louajri
