#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: Number of times
 * Return: Always 0.
*/
void print_line(int n)
{
int a;
for (a = 0; a < n; a++)
{
_putchar('_');
}
_putchar('\n');
}
