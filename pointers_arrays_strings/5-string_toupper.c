#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 *
 * @s: the string to modify
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] -= 32;
		}
	}

	return (s);
}
