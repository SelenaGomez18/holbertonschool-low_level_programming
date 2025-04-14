#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check (ASCII value)
 *
 * Return: 1 if c is a letter (a-z or A-Z), 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
