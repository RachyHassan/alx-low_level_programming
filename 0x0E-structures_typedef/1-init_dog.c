#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a funstion to initialize a variable with 'struct dog' type
 * @d: pointer
 * @name: variable 1
 * @age: variable 2
 * @owner: variable 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
