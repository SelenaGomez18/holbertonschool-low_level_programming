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
 * _strpbrk - Locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: Pointer to the null-terminated string to be scanned.
 * @accept: Pointer to the null-terminated
 * string containing the bytes to match.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	if (!s || !accept)
		return ('\0');

	for (; *s != '\0'; s++)
	{
		if (_strchr(accept, *s))
			return (s);
	}
	return ('\0');
}
