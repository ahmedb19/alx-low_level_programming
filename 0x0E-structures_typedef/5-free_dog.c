#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - frees dogs
 *@d: dog
 *
 */

void free_dog(dog_t *d)
{
	of (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
