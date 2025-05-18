#include "main.h"
#include <stdio.h>
/**
**_strchr-  locates a character in a string.
*@s: pointer to string
*@c: char
*Return:pointer to the first occurrence of the character c in the string s
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}
return (NULL);
}
