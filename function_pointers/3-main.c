#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * Takes command-line arguments to perform a mathematical operation.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success, 98 if the number of arguments is incorrect.
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = (*get_op_func(argv[2]))(a, b);

	printf("%d\n", c);
	return (0);
}
