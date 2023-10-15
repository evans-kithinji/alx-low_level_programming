#include <stdio.h>

/**
 * This program finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,
 * separated by a comma and space, followed by a new line.
 * It adheres to the specified constraints.
 */

// Function to find and print the first 98 Fibonacci numbers
void printFibonacci() {
int a = 1, b = 2, next, count = 0;

// Print the first two Fibonacci numbers
printf("%d, %d, ", a, b);
count += 2;

while (count < 98) {
next = a + b;
a = b;
b = next;

// Print the next Fibonacci number
if (count < 97) {
printf("%d, ", next);
} else {
printf("%d\n", next); // Print a new line after the last number
}

count++;
}
}

int main() {
printFibonacci();
return 0;
}
