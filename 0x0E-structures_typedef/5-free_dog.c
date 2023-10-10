#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a nemory attached to the struck dog will be freed
 * @d: for my dog, my struck dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
		{
			free((*d).name);
		}
		if ((*d).owner)
		{
			free((*d).owner);
		}
		free(d);
	}
}
