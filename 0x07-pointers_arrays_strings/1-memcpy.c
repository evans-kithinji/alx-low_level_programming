#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from one memory area to another
 * @n: The number of bytes to copy from the source to the destination
 * @src: A pointer to the source memory area from which bytes will be copied
 * @dest: A pointer to the destination memory area where bytes will be copied
 * to
 * Return: a pointer to @dest
 *
 * This function copies 'n' bytes from the memory area pointed to by 'src' to
 * the memory area pointed to by 'dest'. It essentially replicates a block of
 * memory from one location to another. The source and destination memory
 * areas should not overlap to ensure correct results.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);

}
