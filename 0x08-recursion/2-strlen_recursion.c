#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0); /*Base case: end of the string, length is 0.*/
}
else
{
return (1 + _strlen_recursion(s + 1));
/*Recursive case: add 1 and call with the next character.*/
}
}
