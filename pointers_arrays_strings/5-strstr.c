#include "main.h"
#include <stdio.h>
/**
**_strstr - locates a substring.
*@needle: pointer to a string
*@haystack:pointer to a string.
*Return:pointer to the beginning of the located substring
*or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (!*needle)
return (haystack);
while (*haystack)
{
h = haystack;
n = needle;
while (*h && *n == *h)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
