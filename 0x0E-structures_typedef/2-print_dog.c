#include "dog.h"

/**
 * print_dog - prints the structure dog
 *
 * @d: the dog structure to print
 */

void	print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name ? d->name : "(nil)"));
		printf("Age: %0.6f\n", (d->age));
		printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
	}
}
