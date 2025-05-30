#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store basic information about a dog
 * @name: A pointer to a string representing the dog's name
 * @age: A float representing the dog's age
 * @owner: A pointer to a string representing the owner's name
 *
 * Description: This structure holds the name, age, and owner of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name to assign
 * @age: Age to assign
 * @owner: Owner to assign
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
