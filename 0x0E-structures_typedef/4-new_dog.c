#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - a function that creates a new dog.
 * Return: success or error
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogCopy = malloc(sizeof(dog_t));

	if (dogCopy == NULL)
	{
		return (NULL);
	}

	dogCopy->name = strdup(name);

	if (dogCopy->name == NULL)
	{
		free(dogCopy);
		return (NULL);
	}
	dogCopy->owner = strdup(owner);

	if (dogCopy->owner == NULL)
	{
		free(dogCopy->name);
		free(dogCopy);
		return (NULL);
	}
	dogCopy->age = age;
	return (dogCopy);
}
