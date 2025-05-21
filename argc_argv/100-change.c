#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Argm. count
 * @argv: Argm. vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int i;
	int denomination[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
		return (-1);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / denomination[i];
		cents = cents % denomination[i];
	}
	printf("%d\n", coins);
	return (0);
}
