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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
