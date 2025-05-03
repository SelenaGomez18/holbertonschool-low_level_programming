#include "main.h"

/**
 * _strncpy - a function copies string
 *
 * @dest: strin detination
 * @src: string to copy
 * @n: number of times to copy the characters
 *
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}

	return (dest);
}
