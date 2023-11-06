#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: dog_.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, nameLen, ownerLen;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL || name == NULL || owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	nameLen = strlen(name), ownerLen = strlen(owner);

	dog->name = malloc(nameLen + 1);
	dog->owner = malloc(ownerLen + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < nameLen; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (i = 0; i < ownerLen; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
