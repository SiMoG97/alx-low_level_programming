#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: the variable
 * @name: dog's name
 * @age: dog's age
 * @owner: the owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
