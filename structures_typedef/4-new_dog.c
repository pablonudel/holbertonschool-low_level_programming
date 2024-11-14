#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: char pointer - name
 * @age: float - age
 * @owner: char pointer - owners name
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;
	char *namecp, *ownercp;

	newdog = malloc(sizeof(struct dog));
	namecp = malloc(sizeof(name));
	ownercp = malloc(sizeof(owner));
	if (ownercp == NULL || namecp == NULL || ownercp == NULL)
		return (NULL);

	namecp = (char *)name;
	ownercp = (char *)owner;

	newdog->name = namecp;
	newdog->age = age;
	newdog->owner = ownercp;

	return (newdog);
}
