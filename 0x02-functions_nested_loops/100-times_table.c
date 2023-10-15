#include "main.h"

/**
 * print_times_table - Print the n times table
 * @n: The value to print the times table for
*/

void print_times_table(int n)
{
int i, j, result;

if (n >= 0 && n <= 15) 
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0) 
{
if (i == 0) 
_putchar(result + '0');
else 
{
_putchar('0');
}
} 
else 
{
_putchar(',');
_putchar(' ');

if (result < 10)
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result >= 100)
_putchar((result / 100) + '0');
if (result >= 10)
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}
}
