#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: dog name
 * @owner: dog's owner
 * @age: dogs age
 *
 * Description: defining dog data structure
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
