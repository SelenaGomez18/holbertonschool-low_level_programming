#include <stdio.h>

/**
 * main - Prints the numbers from 0 to 9, each on a new line
 *
 * Description: This function prints numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
