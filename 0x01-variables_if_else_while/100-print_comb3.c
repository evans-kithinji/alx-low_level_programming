#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)

{
int c, e;

for (c = '0'; c < '9'; c++)
{
for (e = c + 1; e <= '9'; e++)
{
if (e != c)
{
putchar(e);
putchar(c);
if (c == '8' && e == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
