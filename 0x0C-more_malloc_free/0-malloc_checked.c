#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - should cause a normal process termination
 * with a status value of 98
 * @b: memory allocated
 * Return: Pointer to the allocate memory
*/
void *malloc_checked(unsigned int b)
{
void *j = malloc(b);

if (j == NULL)
{
exit(98);
}
return (j);
}
