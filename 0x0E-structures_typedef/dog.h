#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - struct
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
