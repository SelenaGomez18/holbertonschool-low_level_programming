#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	character = 'a';
	/* It loops through alphabet */
	while (character <= 'z')
	{
		putchar(character);  /* It prints each character */
		character++;
	}
	putchar('\n');  /* It adds a new line */

	return (0);
}
