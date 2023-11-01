#include <stdlib.h>

/**
 * argstostr - Concatenates the program's arguments
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 *
 * Return: Pointer to a new string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
len++;
}
len++;  /* For the newline character '\n' */
}

len++; /* For the null terminator '\0' */

str = (char *)malloc(sizeof(char) * len);

if (str == NULL)
{
return (NULL);
}

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}

str[k] = '\0';

return (str);
}
