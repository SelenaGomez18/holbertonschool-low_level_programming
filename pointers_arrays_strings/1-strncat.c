#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: string characteres destination
 * @src: string origin
 * @n: Numbers of characteres to copy
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int s = 0;

	for (; dest[a]; a++)
	;

	for (; s < n && src[s]; s++)
	{
		dest[a + s] = src[s];
	}
	dest[a + s] = '\0';

	return (dest);
}
