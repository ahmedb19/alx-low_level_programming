#include "dog.h"

/**
 *free_dog - frees a dog
 *@d: Struct dog
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}

