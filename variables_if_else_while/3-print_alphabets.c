#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase and
 * uppercase letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}

	putchar('\n');

	return (0);
}
