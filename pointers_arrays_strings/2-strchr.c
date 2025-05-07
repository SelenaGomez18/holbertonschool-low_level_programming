#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: Pointer to the string to search in.
 * @c: Character locate.
 *
 * Return: Pointer to the first ocurrence of the character c
 * in the string s or null if the character is not found.
 *
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
