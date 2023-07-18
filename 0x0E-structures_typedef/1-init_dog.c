#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - intializes a dog information
 * @name : input
 * @age : input
 * @owner : input
 * @d : input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
