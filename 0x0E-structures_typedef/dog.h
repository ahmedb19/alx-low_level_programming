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

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
