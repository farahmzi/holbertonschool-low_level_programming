#include "main.h"
#include <stdio.h>
/**
**_memcpy- copy n bytes of the memory area to another pointer
*@dest: pointer to string
*@src: char
*@n:byte size
*Return:pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
