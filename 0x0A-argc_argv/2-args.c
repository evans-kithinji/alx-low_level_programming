#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i; /*Declare the loop variable outside the loop*/

/* Loop through the command-line arguments */
for (i = 0; i < argc; i++)
{
/* Print each argument followed by a newline character */
printf("%s\n", argv[i]);
}

/* Return 0 to indicate successful execution */
return (0);
}
