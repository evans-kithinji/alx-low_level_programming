#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

while (size-- > 0)
{
action(*array);
array++;
}
}
