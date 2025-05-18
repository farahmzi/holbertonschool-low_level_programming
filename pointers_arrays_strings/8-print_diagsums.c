#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints the sum of the two diagonals
*of a square matrix of integers.
*@a: pointer to a string
*@size: size of 2d array
*/
void print_diagsums(int *a, int size)
{
int i = 0;
int j;
int result = 0;
int result2 = 0;
while (i < size)
{
j = 0;
while (j < size)
{
result = result + a[+i * size + j];
j++;
i++;
result2 = result2 + a[+i *size - j];
}
}
printf("%d, %d\n", result, result2);
}
