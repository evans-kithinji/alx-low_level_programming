#include "main.h"
/**
 * print_number - A function for displaying an integer.
 * @n: The input integer to be printed.
 * Return: Always returns 0.
 */
void print_number(int n)
{
unsigned int i = n;

if (n < 0)
{
_putchar(45);
i = -i;
}
if (i / 10)
{
print_number(i / 10);
}
_putchar(i % 10 + '0');
}
