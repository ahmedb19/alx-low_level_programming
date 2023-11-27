#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct contains dog's info
 *@name: dog's name
 *@age: dog's age
 *@owner: Owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
