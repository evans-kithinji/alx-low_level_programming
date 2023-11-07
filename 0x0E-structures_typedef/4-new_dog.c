#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy, *owner_copy;

new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

name_copy = _strcpy(NULL, name);
if (name_copy == NULL)
{
free(new_dog_ptr);
return (NULL);
}

owner_copy = _strcpy(NULL, owner);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}

/**
 * _strcpy - Copies a string to a new buffer.
 * @dest: The destination buffer (can be NULL to allocate a new buffer).
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer (dest),
 *          or NULL if memory allocation fails.
 */
char *_strcpy(char *dest, char *src)
{
int i, len = 0;
char *original_dest;

if (src == NULL)
return (NULL);

while (src[len])
len++;

if (dest == NULL)
{
original_dest = malloc(len + 1);
if (original_dest == NULL)
return (NULL);
}
else
{
original_dest = dest;
}

for (i = 0; i < len; i++)
original_dest[i] = src[i];
original_dest[i] = '\0';

return (original_dest);
}
