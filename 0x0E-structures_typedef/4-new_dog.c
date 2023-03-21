#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}

/**
 * _strcpy - copies src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src)
	{
		*dest_ptr++ = *src++;
	}
	*dest_ptr = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	return (new_dog ? new_dog : NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	return ((!new_dog->name) ? (free(new_dog), NULL) : new_dog);
	new_dog->name = _strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	return ((!new_dog->owner)
			? (free(new_dog->name), free(new_dog), NULL)
			: new_dog);
	new_dog->owner = _strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
