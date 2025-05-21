#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry poin
 *
 * @argc: Arg. count
 * @argv: Arg. vector
 *
 * Return: 0 on success
 */
int main(int argc,  char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit((unsigned char)argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
