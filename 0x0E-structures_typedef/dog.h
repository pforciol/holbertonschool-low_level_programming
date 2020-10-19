#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - a dog structure
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
} dog_t;

void	init_dog(struct dog *, char *, float, char *);
void	print_dog(struct dog *);
dog_t	*new_dog(char *, float, char *);
void	free_dog(dog_t *);

#endif /* DOG_H */
