#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value (inclusive)
 * @max: the maximum value (inclusive)
 *
 * Return: pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
int *result;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
result = malloc(size * sizeof(int));

if (result == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
result[i] = min + i;
}

return (result);
}
