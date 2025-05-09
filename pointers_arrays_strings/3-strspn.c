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

	for (; s[i] != '\0' && s[i] != c; i++)
	;

	if (s[i] == c)
	{
		return (&s[i]);
	}

	return ('\0');
}

/**
 * _strspn - funtion that gets the length of a prefix substring.
 *
 * @s: pointer initial segment
 * @accept: the characters to match from the beginning of s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	for (; s[i] && _strchr(accept, s[i]); i++)
	;

	return (i);
}
