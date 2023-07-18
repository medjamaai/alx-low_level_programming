#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - intializes a dog information
 * @name : input
 * @age : input
 * @owner : input
 * @d : input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}
