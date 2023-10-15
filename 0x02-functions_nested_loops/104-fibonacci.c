#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * Description: This program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2. The numbers are separated by a comma and a space, followed
 * by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long a = 1, b = 2, next;
int count = 0;

printf("%lu, %lu", a, b);

while (count < 96)  /* We've already printed the first two numbers */
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
count++;
}

printf("\n");

return (0);
}
