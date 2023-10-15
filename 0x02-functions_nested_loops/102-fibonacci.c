#include <stdio.h>

/**
 * main - Entry point for the program.
 *
 * This program prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * The numbers are separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0.
 */

int main() {
long long int a = 1, b = 2, next;
int count;

printf("%lld, %lld", a, b);

for (count = 3; count <= 50; count++) {
next = a + b;
printf(", %lld", next);
a = b;
b = next;
}

printf("\n");

return 0;
}

