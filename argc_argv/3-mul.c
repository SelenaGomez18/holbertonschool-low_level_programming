#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Arg. counter
 * @argv: Arg. vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int m1, m2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	result = m1 * m2;

	printf("%d\n", result);
	return (0);
}
