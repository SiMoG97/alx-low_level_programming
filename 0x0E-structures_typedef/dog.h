#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Dog Struct
  * @name: dog's name
  * @age: dog's age
  * @owner: The owner of the dog
  *
  * Description: dog's attributes
  */
struct dog 
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
