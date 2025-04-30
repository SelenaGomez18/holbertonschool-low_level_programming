#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to append to dest
 *
 * Return: A pointer result string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int s = 0;

	for (; dest[a]; a++)
	;

	for (; src[s]; s++, a++)
	{
		dest[a] = src[s];
	}

	dest[a] = '\0';

	return (dest);
}
