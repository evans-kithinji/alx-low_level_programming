#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size in bytes of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(nmemb * size);

if (mem == NULL)
return (NULL);

char *ptr = mem;
for (unsigned int i = 0; i < nmemb * size; i++)
{
ptr[i] = 0;
}

return (mem);
}
