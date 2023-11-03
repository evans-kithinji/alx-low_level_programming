#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @i: Pointer to the memory previously allocated with malloc
 * @old_size: Size in bytes of the allocated space for i
 * @new_size: New size in bytes of the new memory block
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *i, unsigned int old_size, unsigned int new_size)
{
void *new_i;

if (new_size == old_size)
return (i);

if (i == NULL)
{
new_i = malloc(new_size);
if (new_i == NULL)
return (NULL);
return (new_i);
}

if (new_size == 0)
{
free(i);
return (NULL);
}

new_i = malloc(new_size);
if (new_i == NULL)
return (NULL);

if (new_size < old_size)
old_size = new_size;

memcpy(new_i, i, old_size);
free(i);

return (new_i);
}
