#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of dog (char)
 * @age: age of dog (float)
 * @owner: owner of the dog (char)
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, name_length = 0, owner_length = 0;

	for (i = 0; name[i]; i++) /*cuento tamaño de name*/
		;
	name_length = i + 1;
	for (i = 0; owner[i]; i++) /*cuento tamaño de owner*/
		;
	owner_length = i + 1;

	dog = malloc(sizeof(dog_t)); /*asigno tamaño de mem a dog*/
	if (!dog)
		return (NULL);

	dog->name = malloc(name_length * sizeof(char)); /*asig mem name*/
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_length * sizeof(char)); /*asig mem owner*/
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < name_length - 1; i++) /*guardo copia de nombre*/
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < owner_length - 1; i++) /*guardo copia de owner*/
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
