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
	dog_t *newdog;
	int i, namelen = 0, ownerlen = 0;

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
		return (NULL);

	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;

	newdog->name = malloc(namelen + 1);
	newdog->owner = malloc(ownerlen + 1);
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; i < namelen; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < ownerlen; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';

	return (newdog);
}
