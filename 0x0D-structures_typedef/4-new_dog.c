#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *src);
int _strlen(char *s);
/**
 * new_dog - Creates a new instance of struct
 * @name: string containing name of dog
 * @age: integer of age of dog
 * @owner: string of name of dog owner
 * Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name;
	char *d_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d_owner = _strcpy(owner);
	if (d_owner == NULL)
	{
		free(d);
		return (NULL);
	}
	d_name = _strcpy(name);
	if (d_name == NULL)
	{
		free(d_owner);
		free(d);
		return (NULL);
	}
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);
}
/**
 * _strlen - Calculates the length of a string
 * @s: string assigned to find length
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length]; length++)
	{}

	return (length);
}

/**
 * _strcpy - copies string
 * @src: Contains the original string
 * Return: Copied string
 */
char *_strcpy(char *src)
{
	int count;
	int length;
	char *dest;

	length = _strlen(src);
	dest = malloc(sizeof(char) * length + 1);

	if (dest == NULL)
		return (NULL);

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];

	dest[count] = '\0';
	return (dest);
}
