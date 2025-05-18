#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* isvalid - check the string if it is a number char
*@s:pointer to string
* Return: 0 not valid 1 if valid
*/
int isvalid(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}
/**
* main - check the code
*@argc:arguments count
*@argv:the argument array of command string
* Return: when no number in argv 0 if error or normal
*/
int main(int argc, char *argv[])
{
int i = 1;
int result = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i != argc)
{
if (!isvalid(argv[i]))
{
printf("Error\n");
return (1);
}
result += atoi(argv[i]);
i++;
}
printf("%d\n", result);
return (0);
}
