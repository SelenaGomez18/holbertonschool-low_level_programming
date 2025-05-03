#include "main.h"

/**
 * _strcmp -- Function to compare string
 *
 * @s1: first string compare
 * @s2: second string compare
 *
 * Return: Always void
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	for (; s1[a] != '\0' || s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}

	return (0);
}
