#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog.
 * @d: dog pointer - struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf(!d->name ? "Name: (nil)" : "Name: %s\n", d->name);
		printf(!d->age ? "Age: (nil)\n" : "Age: %f\n", d->age);
		printf(!d->owner ? "Owner: (nil)" : "Owner: %s\n", d->owner);
	}
}
