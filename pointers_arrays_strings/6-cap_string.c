#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: the string to modify
 *
 * Return: the string modified
 */
char *cap_string(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
	{
		if ((s[a] == ' ' || s[a] == ',' || s[a] == ';' ||
			s[a] == '.' || s[a] == '\t' || s[a] == '\n' ||
			s[a] == '!' || s[a] == '?' || s[a] == ')' ||
			s[a] == '(' || s[a] == '\"' || s[a] == '{' ||
			s[a] == '}')
				&& (s[a + 1] >= 'a' && s[a + 1] <= 'z'))
			{
				s[a + 1] -= 32;
			}
	}

	return (s);
}
