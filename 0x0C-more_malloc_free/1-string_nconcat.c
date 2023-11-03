#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, including up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

unsigned int s1_len = 0;
unsigned int s2_len = 0;
unsigned int i;

/* Calculate the lengths of the input strings */
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;

/* Adjust n to be at most the length of s2 */
if (n >= s2_len)
n = s2_len;

/* Allocate memory for the concatenated string */
char *concatenated = (char *)malloc(s1_len + n + 1);

if (concatenated == NULL)
return (NULL);

/* Copy s1 into the result */
for (i = 0; i < s1_len; i++)
concatenated[i] = s1[i];

/* Copy the first n bytes of s2 into the result */
for (i = 0; i < n; i++)
concatenated[s1_len + i] = s2[i];

/* Add null-terminator */
concatenated[s1_len + n] = '\0';

return (concatenated);
}
