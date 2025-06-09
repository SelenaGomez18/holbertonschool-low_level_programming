#include"3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcmp -- Function to compare string
 *
 * @s1: first string compare
 * @s2: second string compare
 *
 * Return: Always void
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}

	return (0);
}

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function that corresponds to the operator.
 * Exits with status 99 if the operator is invalid.
 */
int (*get_op_func(char *s))(int, int)
{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 6; i++)
	{
		if (_strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	printf("Error\n");
	exit(99);
}
