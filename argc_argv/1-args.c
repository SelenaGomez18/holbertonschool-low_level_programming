#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: On success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
