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
 * new_dog - Creates a new dog struct with copies of name and owner.
 * @name: Pointer to a string containing the name of the dog.
 * @age: Float containing the age of the dog.
 * @owner: Pointer to a string containing the owner's name.
 *
 * Return: Pointer to the new dog_t structure, or NULL if failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, s;
	dog_t *new_coco;
	char *name_copy, *owner_copy;

	new_coco = malloc(sizeof(dog_t));
	if (new_coco == NULL)
		return (NULL);

	i = _strlen(name);
	s = _strlen(owner);

	new_coco->name = malloc(sizeof(char) * (i + 1));
}
