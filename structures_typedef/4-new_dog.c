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
	char *namecp = name, *ownercp = owner;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	newdog->name = namecp;
	newdog->age = age;
	newdog->owner = ownercp;

	return (newdog);
}
