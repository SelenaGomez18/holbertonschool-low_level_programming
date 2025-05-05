#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: The string to encode
 *
 * Return: The modified string
 */
char *leet(char *s)
{
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i = 0, j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
