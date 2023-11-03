#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Test the array_range function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    if (a == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    for (int i = 0; i <= 10; i++)
        printf("0x%02x ", a[i]);
    printf("\n");

    free(a);
    return (0);
}
