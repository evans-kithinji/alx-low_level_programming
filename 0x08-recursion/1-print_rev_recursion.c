#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: String to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
/*Recursively call the function with the next character.*/
_putchar(*s);  /*Print the current character.*/
}
}
