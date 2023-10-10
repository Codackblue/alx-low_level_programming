#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int strcount = 0;

	while (s[strcount] != '\0')
	{
		strcount++;
	}

	return (strcount);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - gives me a new strucj dog
 * @name: to name my dog
 * @age: what is the age of my dog
 * @owner: who is the ownwrr if my dog
 * Return: point to return 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name), l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (l1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	(*dog).owner = malloc(sizeof(char) * (l2 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}

	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}
