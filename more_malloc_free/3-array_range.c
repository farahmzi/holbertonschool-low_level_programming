#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*array_range - creates an array of integers.
*@min: string pointer
*@max: string pointer
*Return: NULL on malloc fail or pointer
*/
int *array_range(int min, int max)
{
int *arr;
int i = 0;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
while (min <= max)
{
arr[i] = min;
i++;
min++;
}
return (arr);
}
