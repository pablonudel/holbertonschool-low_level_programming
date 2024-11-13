#ifndef dog_h
#define dog_h
/**
 * struct dog - pet info
 * @name: char pointer - Name of dog
 * @age: float - age of dog
 * @owner: char pointer - name of owner
 *
 * Description: pet information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
