#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n'); /*Print new line character when end of string is reached*/
return;
}

_putchar(*s);  /*Print the current character.*/
_puts_recursion(s + 1);  /*Recursively call function with the next character*/
}
