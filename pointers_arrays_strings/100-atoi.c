#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
*_atoi - copies n elements of an arr to another
*@s: pointer to string
*
*Return:copies of the str
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int started = 0;
while (*s)
{
if (*s == '-' || *s == '+')
{
if (started)
break;
if (*s == '-')
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
int digit = *s - '0';
if (result > (INT_MAX - digit) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);
result = result * 10 + digit;
started = 1;
}
else if (started)
{
break;
}
s++;
}
return (result *sign);
}
