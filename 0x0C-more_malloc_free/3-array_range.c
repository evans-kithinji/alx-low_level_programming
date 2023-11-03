#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: Pointer to the newly created array or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(sizeof(int) * size);

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = min++;

return (arr);
}

#include "main.h"
#include <stdio.h>

int main(void)
{
int *a;
int i;  /*Declare 'i' outside of the for loop.*/

a = array_range(0, 10);
if (a == NULL)
{
printf("Memory allocation failed.\n");
return (1);
}

for (i = 0; i <= 10; i++)  /*Use 'i' within the for loop.*/
printf("0x%02x ", a[i]);
printf("\n");

free(a);
return (0);
}
