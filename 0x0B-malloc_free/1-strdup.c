#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
char *cpy;
unsigned int len = 0;
unsigned int i;

if (str == NULL)
return (NULL);

while (str[len])
len++;

cpy = (char *)malloc((len + 1) * sizeof(char));
if (cpy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
cpy[i] = str[i];

return (cpy);
}
