#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
		;

	return (a);
}

/**
 * _strncpy - Copies a string up to n characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: destination string
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

/**
 * new_dog - Creates a new dog struct with copies of name and owner.
 * @name: Pointer to a string containing the name of the dog.
 * @age: Float containing the age of the dog.
 * @owner: Pointer to a string containing the owner's name.
 *
 * Return: Pointer to the new dog_t structure, or NULL if failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new_coco;

	new_coco = malloc(sizeof(dog_t));
	if (new_coco == NULL)
		return (NULL);

	i = _strlen(name);
	j = _strlen(owner);

	new_coco->name = malloc(sizeof(char) * (i + 1));
	if (new_coco->name == NULL)
	{
		free(new_coco);
		return (NULL);
	}
	_strncpy(new_coco->name, name, i + 1);

	new_coco->owner = malloc(sizeof(char) * (j + 1));
	if (new_coco->owner == NULL)
	{
		free(new_coco->name);
		free(new_coco);
		return (NULL);
	}
	_strncpy(new_coco->owner, owner, j + 1);

	new_coco->age = age;

	return (new_coco);
}
