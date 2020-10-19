#include "dog.h"

/**
 * free_dog - frees dog
 *
 * @d: the dog structure
 */

void	free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
