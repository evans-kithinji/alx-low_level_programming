#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
