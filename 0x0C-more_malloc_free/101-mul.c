#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists of digits
 * @string: The string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *string)
{
while (*string)
{
if (*string < '0' || *string > '9')
return (0);
string++;
}
return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on incorrect arguments, 1 on other errors
 */
int main(int argc, char *argv[])
{
unsigned long int num1, num2, result;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);
result = num1 * num2;

printf("%lu\n", result);
return (0);
}
