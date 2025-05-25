#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
*@str: char pointer
*Return:NULL if str = NULL and *str if not
*/
char *_strdup(char *str)
{
int len = 0;
int i = 0;
char *arr;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
len++;
i++;
}
arr = malloc(len + 1);
if (arr == NULL)
return (NULL);
i = 0;
while (i < len)
{
arr[i] = str[i];
i++;
}
arr[len] = '\0';
return (arr);
}
