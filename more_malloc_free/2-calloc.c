#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - allocates memory for an array, using malloc.
*@nmemb: string pointer
*@size: string pointer
*Return: NULL on malloc fail or pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(size * nmemb);
if (arr == NULL)
return (NULL);

while (i < nmemb * size)
{
((char *)arr)[i] = 0;
i++;
}
return (arr);
}
