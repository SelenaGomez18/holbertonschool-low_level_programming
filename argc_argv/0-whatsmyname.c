#include <stdio.h>


/**
 * main - Entry point of the program
 * @argc: Argument count (unused)
 * @argv: Argument vector (array of strings)
 *
 * Description: Prints the name of the program followed by a new line.
 * The name includes the path used to execute the program.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
