#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - free 2D int **.
*
*@grid:int pointer to pointer
*@height:int pointer
*Return:NULL if fail = NULL and *str if not
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
return;
}
