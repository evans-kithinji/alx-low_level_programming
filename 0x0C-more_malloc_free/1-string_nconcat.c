#include "main.h"

/**
 * string_nconcat - concatenates/joins two strings
 * @s1: The first string
 * @s2: Thse second string
 * @n: The maximum number of byte from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string.
 *          If the function fails, it returns NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a, b, c;
char *s;

if (s1 == NULL)
{
a = 0;
}
else
{
for (a = 0; s1[a]; ++a)
;
}
if (s2 == NULL)
{
b = 0;
}
else
{
for (c = 0; s2[c]; ++c)
;
}
if (b > n)
b = n;
s = malloc(sizeof(char) * (a + b + 1));
if (s == NULL)
return (NULL);
for (c = 0; c < a; c++)
s[c] = s1[c];
for (c = 0; c < b; c++)
s[c + a] = s2[c];
s[a + b] = '\0';
return (s);
}
