#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all alphabet the lowercase in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char character;

	for (character = 'z'; character >= 'a'; character--)

	{
		putchar(character);
	}
	putchar(10);
	return (0);
}
