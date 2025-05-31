#include <stddef.h>
#include <stdio.h>
/**
*int_index -searches for an integer.
*@array: an array of int
*@size: size of array
*@cmp: a function pointer
*Return: index of matching elements
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}i
