#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - struct pointer
 *
 * @d: pointer to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
