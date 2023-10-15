#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * This program finds and prints the sum of even-valued terms in the Fibonacci
 * sequence that do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
int a = 1, b = 2, next;
int sum = 0;

while (b <= 4000000)
{
if (b % 2 == 0)
{
sum += b;
}
next = a + b;
a = b;
b = next;
}

printf("%d\n", sum);

return (0);
}
