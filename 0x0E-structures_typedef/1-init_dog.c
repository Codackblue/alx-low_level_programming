#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variable gor dogs
 * @d: pointrr initialized for my dog
 * @name: a dogs bame and name
 * @age: my dogs age
 * @owner: my own dogs structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
