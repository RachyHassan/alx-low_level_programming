#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - prints length of a string
 * @s: string
 * Return: length
 *
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * _strcpy - copies the string coming from pointer 2 to pointer 1
 * @dest: pointer 1
 * @src: pointer 2
 * Return: pointer to p1
 */
char *_strcpy(char *dest, chhar *src)
{
	int len, v;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (v = 0; v < len; v++)
	{
		dest[v] = src[v];
	}
	dest[v] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new function called new dog
 * @name: variabel 1
 * @age: variable 2
 * @owner: variable 3
 * Return: pointer to new dog if successful
 */
dog_t *new_dog(char *name, float *age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = mallox(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
