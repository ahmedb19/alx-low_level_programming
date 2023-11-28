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
		free(d->name);
		free(d->owner);
		free(d);
	}
}

