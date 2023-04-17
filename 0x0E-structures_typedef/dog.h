#ifndef DOG_H
#define DOG_H
/**
 *struct dog - holds the general information obout a given dog
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
