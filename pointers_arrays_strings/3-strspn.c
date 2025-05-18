#include "main.h"
#include <stdio.h>
/**
**_strspn-  gets the length of a prefix substring.
*@s: pointer to string
*@accept:prefix substring.
*Return:number of bytes in the initial segment of s
* which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *a;
while (*s)
{
int found = 0;
a = accept;
while (*a)
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}
if (!found)
{
return (i);
}
s++;
i++;
}
return (i);
}
