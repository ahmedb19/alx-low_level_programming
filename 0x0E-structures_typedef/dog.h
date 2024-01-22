#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

struct dog {
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
