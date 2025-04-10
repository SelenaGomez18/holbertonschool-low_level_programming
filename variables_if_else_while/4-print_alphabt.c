#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the alphabet
 * except character q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	
	/* It loops through alphabet */
	for (character = 'a'; character <= 'z'; character++)
	{
		if (character !='e' && character !='q')
		{
			putchar(character);  /* It prints each character */
		}
	}
	putchar('\n');  /* It adds a new line */

	return (0);
}
