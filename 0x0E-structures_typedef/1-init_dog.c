#include<stdlib.h>
#include"dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: name of struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * description: Write a function that initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
