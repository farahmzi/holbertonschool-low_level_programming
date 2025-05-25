#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings.
*@s1: string pointer
*@s2: string pointer
*@n: bytes dilemter
*Return: pointer of the desiered b
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int j = 0;
unsigned int i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

if (n >= j)
{
str = malloc(i + j + 1);
if (str == NULL)
return (NULL);
}
else
{
str = malloc(i + n + 1);
if (str == NULL)
return (NULL);
}
i = 0;
j = 0;
while (s1[i] != '\0')
{
str[i] = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';
return (str);
}
