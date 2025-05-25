#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars
*and initializes it with a specific char.
*@c: pointer_number
*@size:number
*Return:NULL if size 0 and *char if not
*/
char *create_array(unsigned int size, char c)
{
char *arr = malloc(size * sizeof(c));
unsigned int i;
if (arr == NULL)
return (NULL);
if (!size)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
