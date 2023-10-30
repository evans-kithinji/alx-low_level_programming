#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * and initializes it with a specific char
 * @size: the size of the array to create
 * @c: char to initialize the array with
 *
 * Return: Pointer to the array / NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
