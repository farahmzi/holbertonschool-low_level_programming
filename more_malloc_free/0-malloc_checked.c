#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - allocates memory using malloc
*@b:memory allocates
*Return: pointer of the desiered b
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
