#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: input struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
