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
	if (d == NULL)
		return;

	printf(!d->name ? "Name: (nil)\n" : "Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf(!d->owner ? "Owner: (nil)\n" : "Owner: %s\n", d->owner);
}
