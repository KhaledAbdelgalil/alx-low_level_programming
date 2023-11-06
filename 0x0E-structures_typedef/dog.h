#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - struct that stores dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct called "dog" that stores dog's info.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);
dog_t *new_dog(char *, float, char*);
void free_dog(dog_t *);
#endif
