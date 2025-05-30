#ifndef _DOG_H_
#define _DOG_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

 /**
  * struct dog - Define a new type structure dog
  * @name: char * name of the dog
  * @age: char * name of the dog
  * @owner: char * owner of the dog
  *
  * Description: longer description
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif /*_DOG_H_ */
