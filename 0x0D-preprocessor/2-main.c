#include <stdio.h>

/**
 * main - Prints the name of the current source file.
 *
 * Prints the name of the source file from which it was compiled.
 * It uses the predefined C macro __FILE__ to obtain the source file's name.
 *
 * Return: Always 0.
 */
int main(void)
{
/* Print the name of the source file */
printf("%s\n", __FILE__);

return (0);
}
