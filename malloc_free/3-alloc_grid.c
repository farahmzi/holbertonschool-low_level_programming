#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid -returns a pointer to a 2 dimensional array of integers.
*
*@width:int pointer
*@height:int pointer
*Return:NULL if fail = NULL and *str if not
*/
int **alloc_grid(int width, int height)
{
int i;
int j;
int k = 0;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
j = 0;
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (k < i)
{
free(grid[k]);
k++;
}
free(grid);
return (NULL);
}
while (j < width)
{
grid[i][j] = 0;
j++;
}
}
return (grid);
}
