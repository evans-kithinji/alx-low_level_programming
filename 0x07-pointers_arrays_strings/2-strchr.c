#include "main.h"

/**
 * _strchr - Finds a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * This function searches for the first occurrence of the character 'c'
 * in the string 's'.
 * If the character is found, it returns a pointer to that location in
 * the string.
 * If the character is not found, it returns NULL.
*/
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}

return ('\0');
}
