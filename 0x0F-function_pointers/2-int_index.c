#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: Pointer to the array to search.
 * @size: Size of the array.
 * @cmp: Comparison function to apply.
 *
 * Return: Index of the first matching element,
 * or -1 if no match or invalid inputs.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
