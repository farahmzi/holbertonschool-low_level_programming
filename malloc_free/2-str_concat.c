#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings.
*
*@s1:char pointer
*@s2:char pointer
*Return:NULL if str = NULL and *str if not
*/
char *str_concat(char *s1, char *s2)
{
int len1 = 0;
int len2 = 0;
int i = 0;
int j = 0;
char *str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
len1++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
len2++;
i++;
}
str = malloc(len1 + len2 + 1);
if (str == NULL)
return (NULL);
i = 0;
while (i < len1)
{
str[i] = s1[i];
i++;
}
while (j < len2)
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';
return (str);
}
