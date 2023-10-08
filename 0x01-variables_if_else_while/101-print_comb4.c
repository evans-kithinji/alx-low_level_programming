#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)

{
int c, e, g;

for (c = '0'; c< '9'; c++)
{
for (e = c + 1; e <= '9'; e++)
{
for (g = e + 1; g <= '9'; g++)
{
if ((e != c) != g)
{
putchar(c);
putchar(e);
putchar(g);
if (c == '7'; && e == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
