#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL); /* Return NULL if width or height is 0 or negative */
}

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL); /* Return NULL on failure to allocate memory for the rows */
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory if allocation fails */
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

/* Initialize each element to 0 */
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

return (grid);
}
