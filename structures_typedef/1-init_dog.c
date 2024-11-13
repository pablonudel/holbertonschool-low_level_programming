#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: dog pointer - struct dog
 * @name: char pointer - name
 * @age: float - age
 * @owner: char pointer - owners name
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
